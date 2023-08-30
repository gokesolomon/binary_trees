#include "binary_trees.h"

/**
 * binary_tree_node -  btree node to be created.
 * @parent: A pointer to the parent of the node to be created.
 * @value: Value in node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a point to the new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
