#include "binary_trees.h"

/**
 * binary_tree_is_perfect- function that checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if the binary tree is full, 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree)
	{
		if (tree->left)
			left += binary_tree_is_perfect(tree->left) + 1;

		if (tree->right)
			right += binary_tree_is_perfect(tree->right) + 1;

		if (left == right)
			return (1);
	}
	return (0);
}
