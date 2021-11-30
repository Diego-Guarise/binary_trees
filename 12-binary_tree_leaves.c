#include "binary_trees.h"

/**
 * binary_tree_leaves- function that counts the leaves of a binary tree
 * @tree: pointer to the root node
 * Return: number of leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (!(tree->right) && !(tree->left))
			leaves += 1;

		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
