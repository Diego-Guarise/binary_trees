#include "binary_trees.h"
/**
 * binary_tree_size- function that measures the size of a binary tree
 * @tree: pointer to the root node
 * Return: size of binary tree, 0 if null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0, size_right = 0;

	if (!tree)
		return (0);

	size_left += binary_tree_size(tree->left);
	size_right += binary_tree_size(tree->right);

	return (size_left + size_right + 1);
}

/**
 * binary_tree_is_complete - Function that checks if a binary tree is complete
 * @tree: pointer to the root of the tree
 * Return: 1 if complete, 0 if not.
 */

int binary_tree_is_complete(const binary_tree_t *tree);
{
	size_t = num_of_nodes, level;
	int status;

	if (!tree)
		return (0);

	num_of_nodes = binary_tree_size(tree);

	return(check_Complete(tree, 0, num_of_nodes));
}

/**
 * check_Complete - Check if a tree is complete
 * @tree: pointer to the node to check
 * @index: height of the node
 * @size: size of the tree
 * Return: 1 if complete, 0 if not
 */
int check_Complete(const binary_tree_t *tree, size_t index, size_t size)
{
  if (!tree)
    return (1);

  if (index >= num_of_nodes)
    return (0);

  return (check_Complete(root->left, 2 * index + 1, num_of_nodes) &&
		  check_Complete(root->right, 2 * index + 2, num_of_nodes));
}
