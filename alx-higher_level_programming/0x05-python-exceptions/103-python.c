#include "Python.h"
#include "bytesobject.h"

void print_python_bytes(PyObject *p);
void print_python_float(PyObject *p);
void callFunc(const char *type, PyObject *p);

/**
 * struct typeFunc_s - structs for printing bython objects
 * @type: type of object
 * @f: function to print object
 */
typedef struct typeFunc_s
{
	char *type;
	void (*f)(PyObject *p);
} typeFunc_t;

/**
 * print_python_list - print some info about a python list object
 * @p: python list object
 */
void print_python_list(PyObject *p)
{
	PyListObject *list = (PyListObject *)p;
	Py_ssize_t i = 0, len;
	PyTypeObject *type;

	fflush(stdout);

	printf("[*] Python list info\n");

	if (PyList_CheckExact(p) == 0)
	{ /* invalid list oject */
		printf("  [ERROR] Invalid List Object\n");
			return;
	}

	/* print info of the python list */
	printf("[*] Size of the Python List = %li\n", list->ob_base.ob_size);
	len = list->ob_base.ob_size;
		printf("[*] Allocated = %li\n", list->allocated);

		for (i = 0; i < len; ++i)
		{
			type = list->ob_item[i]->ob_type;
			printf("Element %li: %s\n", i, type->tp_name);
			/* check and call object function if supported */
			callFunc(type->tp_name, list->ob_item[i]);
		}
}

/**
 * print_python_bytes - prints information about some python bytes object
 * @p: python object
 */
void print_python_bytes(PyObject *p)
{
	Py_ssize_t len, i = 0;
	char *str;

	fflush(stdout);

	printf("[.] bytes object info\n");

	if (PyBytes_CheckExact(p) == 0)
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	len = PyBytes_Size(p);
	printf("  size: %li\n", len);
	str = ((PyBytesObject *)p)->ob_sval;
	printf("  trying string: %s\n", str);

	if (len >= 10)
		len = 10;
	else
		len++;
	printf("  first %li bytes: ", len);
	for (i = 0; i < len; ++i)
	{
		printf("%02x", (unsigned char)str[i]);
		if (i + 1 < len)
			putchar(' ');
	}
	putchar('\n');
}

/**
 * print_python_float - print python float.
 * @p: pointer to the possible python object
 */
void print_python_float(PyObject *p)
{
	double fval;
	char *buf = NULL;

	fflush(stdout);

	printf("[.] float object info\n");
	if (PyFloat_CheckExact(p) == 0)
	{
		printf("  [ERROR] Invalid Float Object\n");
		return;
	}

	fval = ((PyFloatObject *)p)->ob_fval;

	buf = PyOS_double_to_string(fval, 'r', 0,  
			Py_DTSF_ADD_DOT_0, NULL);  
	printf("  value: %s\n", buf);
	PyMem_Free(buf);  
}

/**
 * callFunc - call type function if available
 * @type: type name
 */
void callFunc(const char *type, PyObject *p)
{
	typeFunc_t typeFuncs[] = {{"bytes", print_python_bytes}, {"float", print_python_float}, {NULL, NULL}};
	unsigned int i = 0;

	for (i = 0; typeFuncs[i].type; ++i)
	{
		if (strcmp(typeFuncs[i].type, type) == 0)
			typeFuncs[i].f(p);
	}
}
