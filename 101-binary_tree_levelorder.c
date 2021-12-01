#include "binary_trees.h"

/**
  * max - returns max between two numbers
  * @a: first number
  * @b: second number
  * Return: max between a and b
  */
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
  * get_height - measures the height of a binary tree
  * @tree: tree to measure
  * Return: height of tree, 0 if tree is NULL
  */
size_t get_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + max(get_height(tree->left), get_height(tree->right)));
}

/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: tree to measure
  * Return: height of tree, 0 if tree is NULL
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = get_height(tree);

	return (height);
}

/**
  * currentLevel - visit the curren level and process all nodes at that level
  * @tree: tree to traverse
  * @level: level in the tree
  * @func: pointer to a function to call for each node (prints node's value)
  */
void currentLevel(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (level == 1)
		(*func)(tree->n);
	else if (level > 1)
	{
		currentLevel(tree->left, level - 1, (*func));
		currentLevel(tree->right, level - 1, (*func));
	}
}

/**
  * binary_tree_levelorder - goes through a binary tree level-order traversal
  * @tree: tree to traverse
  * @func: pointer to a function to call for each node (prints node's value)
  */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	int height = binary_tree_height(tree);
	int i;

	for (i = 0; i <= height; i++)
		currentLevel(tree, i, (*func));
}
