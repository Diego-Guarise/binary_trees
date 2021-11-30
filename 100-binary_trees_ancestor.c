#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of binary tree, 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree)
	{
		if (tree->left)
			height_left = binary_tree_height(tree->left) + 1;
		if (tree->right)
			height_right = binary_tree_height(tree->right) + 1;

		if (height_left >= height_right)
			return (height_left);
		else
			return (height_right);
	}
	else
		return (0);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes or null
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t f1 = 0, f2 = 0;
	int difheight= 0;

	f1 = binary_tree_height(first);
	f2 = binary_tree_height(second);

	difheight = f1 - f2;
	if (difheight < 0)
		difheight = -difheight;

	return (first->parent);
}
