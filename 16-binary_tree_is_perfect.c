#include "binary_trees.h"

/**
 * binary_tree_is_perfect- function that checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if the binary tree is full, 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int flag = 1;

	if (tree)
	{
		if (tree->left && tree->right)
		{
			flag = binary_tree_is_perfect(tree->left);
			flag = binary_tree_is_perfect(tree->right);
		}
		if ((!tree->left && tree->right) || (tree->left && !tree->right))
			flag = 0;
	}
	return (flag);
}
