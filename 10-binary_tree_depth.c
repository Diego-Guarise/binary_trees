#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree: pointer to the root node
 * Return: depth of binary tree, 0 if null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree)
	{
		if (tree->parent)
		{
			depth = binary_tree_depth(tree->parent) + 1;
		}
		return (depth);
	}
	else
		return (0);
}
