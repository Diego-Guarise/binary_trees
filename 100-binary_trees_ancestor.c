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

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two
 * given nodes or null
 */

binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	size_t depth_first = 0, depth_second = 0;

	if (!first || !second)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	if (depth_first < depth_second)
	{
		while (depth_second > depth_first)
		{
			depth_second -= 1;
			second = second->parent;
		}
	}
	else if (depth_first > depth_second)
	{
		while (depth_first > depth_second)
		{
			depth_first -= 1;
			first = first->parent;
		}

	}
	while (first && second && first != second)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)second);
}
