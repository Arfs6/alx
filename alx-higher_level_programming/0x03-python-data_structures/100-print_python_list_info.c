#include <Python.h>

/**
 * print_python_list_info - print some info about a python list object
 * @p: python list object
 */
void print_python_list_info(PyObject *p)
{
	PyListObject *list = (PyListObject *)p;
	Py_ssize_t i = 0, len;
	PyTypeObject *type;

	/* you need to take care of passing none list object */

	/* print size of the python list */
	printf("[*] Size of the Python List = %li\n", list->ob_base.ob_size);
	len = list->ob_base.ob_size;
		/* print the number of allocated of the list */
		printf("[*] Allocated = %li\n", list->allocated);

		for (i = 0; i < len; ++i)
		{
			type = list->ob_item[i]->ob_type;
			printf("Element %li: %s\n", i, type->tp_name);
		}
}
