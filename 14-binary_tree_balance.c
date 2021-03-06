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
 * binary_tree_balance- function that measures the balance factor of
 * a binary tree
 * @tree: pointer to the root node
 * Return: Balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0, balance = 0;

	if (!tree)
		return (0);

	if (tree->right)
		height_right = binary_tree_height(tree->right) + 1;
	if (tree->left)
		height_left = binary_tree_height(tree->left) + 1;

	balance = height_left - height_right;
	return (balance);
}
