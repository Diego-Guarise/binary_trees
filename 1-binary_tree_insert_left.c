#include "binary_trees.h"
/**
 * binary_tree_insert_left -  function that inserts a node as the left-child
 * of another node
 * @parent: is a pointer to the node to insert the left-child insert
 * @value: is the value toore in the new node
 * Return: a pointer to the created node, or NULL on failure or if parent
 * is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *childleft;

	childleft = malloc(sizeof(binary_tree_t));
	if (!childleft)
		return (NULL);

	if (!parent)
	{
		free(childleft);
		return (NULL);
	}

	childleft->n = value;
	childleft->parent = parent;
	childleft->right = NULL;
	if (parent->left != NULL)
	{
		childleft->left = parent->left;
		childleft->left->parent = childleft;
	}
	parent->left = childleft;
	return (childleft);
}
