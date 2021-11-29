#include "binary_trees.h"
/**
 * binary_tree_insert_left -  function that inserts a node as the left-child of another node
 * @parent is a pointer to the node to insert the left-child insert
 * @value is the value toore in the new node
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *childright;

	childright = malloc(sizeof(binary_tree_t));
	if (!childright)
		return (NULL);

	if (!parent)
	{
		free(childright);
		return (NULL);
	}

	childright->n = value;
	childright->parent = parent;
	if (parent->right != NULL)
	{
		parent->right->parent = childright;
		childright->right = parent->right;
	}
	parent->right = childright;
	return (childright);
}
