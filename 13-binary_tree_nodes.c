#include "binary_trees.h"

/**
 * binary_tree_nodes- function that counts the nodes with childs
 * @tree: pointer to the root node
 * Return: number of nodes with childs.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if ((tree->right) || (tree->left))
			nodes += 1;

		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
