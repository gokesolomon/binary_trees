#include "binary_trees.h"

/**
 * binary_trees_ancestor - lowest common ancestor of two nodes.
 * @first: Pointer to first node.
 * @second: Pointer to second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *om, *op;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	om = first->parent, op = second->parent;
	if (first == op || !om || (!om->parent && op))
		return (binary_trees_ancestor(first, op));
	else if (om == second || !op || (!op->parent && om))
		return (binary_trees_ancestor(om, second));
	return (binary_trees_ancestor(om, op));
}
