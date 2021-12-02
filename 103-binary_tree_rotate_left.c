#include "binary_trees.h"

/**
 * binary_tree_rotate_left - a function that performs a
 * left-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *change = tree->right;

	tree->right = change->left;
	change->left= tree;
	tree = change;

	return (tree);
}
