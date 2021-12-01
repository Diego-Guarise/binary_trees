#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of binary tree, 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree)
	{
		if (tree->left)
			height_left = binary_tree_height(tree->left) + 1;
		if (tree->right)
			height_right = binary_tree_height(tree->right) + 1;

		if (height_left >= height_right)
			return (height_left);
		else
			return (height_right);
	}
	else
		return (0);
}

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = binary_tree_height(tree), i;

	for (i = 0; i <= height; i++)
		current_level(tree, height, func);
}


/**
 * current_level - 
 * @tree: pointer to the root node
 * @level: height of the node
 * Return: nothing
 */
void current_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	size_t height = binary_tree_height(tree);

	if (!tree)
		return;
	if (level == height)
		func(tree->n);
	else if (level < height)
	{
		current_level(tree->left, level - 1, func);
		current_level(tree->right, level - 1, func);
	}

}

/**
 * binary_tree_levelorder - function that goes through a binary tree
 * using level-order traversal
 * @tree: pointer to the root node
 * @func: pointer to a function to call for each node
 * return: Nothing
/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = binary_tree_height(tree), i;

	for (i = 0; i <= height; i++)
		current_level(tree, i, func);
}*/
