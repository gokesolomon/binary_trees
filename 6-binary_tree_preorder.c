#include "binary_trees.h"

/**
 * binary_tree_preorder -  using pre-order traversal to go through.
 * @tree: A pointer to the tree to traverse.
 * @func: A pointer to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
