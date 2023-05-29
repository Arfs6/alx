#include "Python.h"
#include "bytesobject.h"

void print_python_bytes(PyObject *p);

/**
 * print_python_list - print some info about a python list object
 * @p: python list object
 */
void print_python_list(PyObject *p)
{
	PyListObject *list = (PyListObject *)p;
	Py_ssize_t i = 0, len;
	PyTypeObject *type;

	/* you need to take care of passing none list object */

	/* print info of the python list */
	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %li\n", list->ob_base.ob_size);
	len = list->ob_base.ob_size;
		printf("[*] Allocated = %li\n", list->allocated);

		for (i = 0; i < len; ++i)
		{
			type = list->ob_item[i]->ob_type;
			printf("Element %li: %s\n", i, type->tp_name);
			if (strcmp(type->tp_name, "bytes") == 0)
				print_python_bytes(list->ob_item[i]);
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

	printf("[.] bytes object info\n");

	if (PyBytes_CheckExact(p) == 0)
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	len = PyBytes_Size(p);
	printf("  size: %li\n", len);
	str = PyBytes_AsString(p);
	printf("  trying string: %s\n", str);

	if (len > 10)
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
