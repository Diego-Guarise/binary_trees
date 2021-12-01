#include "binary_trees.h"

/**
 * binary_tree_is_full- function that checks if a binary tree is full
 * @tree: pointer to the root node
 * Return: 1 if the binary tree is full, 0 if not.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag = 1;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		flag = binary_tree_is_full(tree->left);
		flag = binary_tree_is_full(tree->right);
	}
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		flag = 0;
	return (flag);
}
