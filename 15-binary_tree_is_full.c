#include "binary_trees.h"

/**
 * binary_tree_is_full- function that checks if a binary tree is full
 * @tree: pointer to the root node
 * Return: 1 if the binary tree is full, 0 if not.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag_l, flag_r;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		flag_l = binary_tree_is_full(tree->left);
		flag_r = binary_tree_is_full(tree->right);
		if (flag_l + flag_r == 2)
			return (1);
		else
			return (0);
	}
	return (0);
}
