#include "binary_trees.h"

/**
 * array_to_bst - Builds a BST from an array.
 * @array: A pointer to the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the created BST, or NULL upon failure.
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t k, l;

	if (array == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
	{
		for (l = 0; l < k; l++)
		{
			if (array[l] == array[k])
				break;
		}
		if (l == k)
		{
			if (bst_insert(&tree, array[k]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
