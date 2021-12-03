#include "binary_trees.h"

/**
 * greater_than - check if all values in the tree are greater than a value
 * @tree: pointer to the tree to check
 * @value: value to check against
 * Return: 1 if true, 0 if false
 */
int greater_than(const binary_tree_t *tree, int value)
{
	int left, right;

	if (!tree)
		return (1);

	if (tree->n > value)
	{
		left = greater_than(tree->left, value);
		right = greater_than(tree->right, value);
		if (left && right)
			return (1);
	}
	return (0);
}

/**
 * less_than - check if all values in the tree are less than a specific value
 * @tree: pointer to the tree to check
 * @value: value to check against
 * Return: 1 if true, 0 if false
 */
int less_than(const binary_tree_t *tree, int value)
{
	int left, right;

	if (!tree)
		return (1);

	if (tree->n < value)
	{
		left = less_than(tree->left, value);
		right = less_than(tree->right, value);
		if (left && right)
			return (1);
	}
	return (0);
}

/**
 * binary_tree_is_bst - function to check if a binary tree is a BST
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (less_than(tree->left, tree->n) && greater_than(tree->right, tree->n))
	{
		if (!tree->left || binary_tree_is_bst(tree->left))
		{
			if (!tree->right || binary_tree_is_bst(tree->right))
				return (1);
		}

	}
	return (0);
}
