#include <Python.h>
#include </usr/include/python3.9/pyconfig-64.h>

/**
 * print_python_list_info - function that prints some basic info about Python lists.
 * @p: a PyObject list
 */

void print_python_list_info(PyObject *p)
{
	int size, alloc, i;
	PyOBject *obj;
	
	size = Py_SIZE(p);
	alloc = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", alloc);

	for (i = 0; i < size; i++)
	{
		printf("Element %d: ", i);

		obj = PyList_GetItem(p, i);
		printf("%s\n", Py_TYPE(obj)->tp_name);
	}
}
