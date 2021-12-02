#include "binary_trees.h"

/**
  * binary_tree_size -  function that performs a left-rotation on a binary tree
  * @tree: is a pointer to the root node of the tree to rotate
  * Return:  a pointer to the new root node of the tree once rotated
  */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *right = tree->right;
	binary_tree_t *tree = right->left;

	right->left = tree;
	tree->right = tree;

	return (right);
}
