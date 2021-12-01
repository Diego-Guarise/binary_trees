#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of binary tree, 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 1, height_right = 1;

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
  * _exp - calculates 2 to the power of exp
  * @height: exponent
  * Return: result
  */
size_t _exp(size_t height)
{
	size_t result = 1;

	for (; height > 0; height--)
		result = result * 2;

	return (result);
}

/**
 * binary_tree_is_perfect- function that checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if the binary tree is full, 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		if (binary_tree_size(tree) == ((_exp(binary_tree_height(tree))) - 1))
			return (1);
	}
	return (0);

}
