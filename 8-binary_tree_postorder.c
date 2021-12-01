#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a binary tree
 * using post-order traversal
 * @tree: pointer to the root node
 * @func: pointer to a function to call for each node
 * return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_postorder(tree->left, (*func));
	binary_tree_postorder(tree->right, (*func));
	(*func)(tree->n);
}
