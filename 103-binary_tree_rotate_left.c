#include "binary_trees.h"

/**
 * binary_tree_rotate_left - a function that performs a
 * left-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp, *parent;

	if (!tree || !tree->right)
		return (NULL);

	tmp = tree;
	parent = tree->parent;
	tree = tree->right;
	tree->parent = NULL;
	if (tree->left)
	{
		tmp->right = tree->left;
		tree->left->parent = tmp;
	}
	else
		tmp->right = NULL;

	tmp->parent = tree;
	tree->left = tmp;
	if (parent)
		parent->right = tree;
	tree->parent = parent;
	return (tree);
}
