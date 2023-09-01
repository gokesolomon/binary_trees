#include "binary_trees.h"

/**
 * array_to_heap - builds a MBH tree from an array
 * @array: a pointer to the first element of array to be converted
 * @size: the number of element in array
 *
 * Return: a pointer to the root node of Binary Heap
 *         NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
