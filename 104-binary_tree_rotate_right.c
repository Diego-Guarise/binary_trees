#include "binary_trees.h"

/**
 * binary_tree_rotate_right - a function that performs a
 * right-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *change = tree->left;

	tree->left = change->right;
	change->right= tree;
	tree = change;

	return (tree);
}
