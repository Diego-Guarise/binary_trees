#include "binary_trees.h"

/**
 * binary_tree_balance- function that measures the balance factor of
 * a binary tree
 * @tree: pointer to the root node
 * Return: Balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0, balance = 0;

	if (tree)
	{
		if (tree->left)
			height_left = binary_tree_balance(tree->left) + 1;
		if (tree->right)
			height_right = binary_tree_balance(tree->right) + 1;
	}
	balance = height_right - height_left;
	printf("%d\n", balance);
	return (balance);
}
