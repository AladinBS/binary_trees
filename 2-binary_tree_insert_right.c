#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right child of other node
 * Return: pointer
 * @parent: parent
 * @value: value
 *
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *x;

	if (parent == NULL)
		return (NULL);

	x = malloc(sizeof(binary_tree_t));
	if (x == NULL)
		return (NULL);

	x->parent = parent;
	x->n = value;
	x->left = NULL;
	x->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = x;

	parent->right = x;
	return (x);

}
