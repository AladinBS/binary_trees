#include "binary_trees.h"
/**
 * binary_tree_insert_left - node for left-child of node
 * Return: pointer
 * @parent: parent
 * @value: value
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *x;

	if (parent == NULL)
		return (NULL);

	x = malloc(sizeof(binary_tree_t));
	if (x == NULL)
		return (NULL);

	x->parent = parent;
	x->n = value;
	x->left = parent->left;
	x->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = x;

	parent->left = x;

	return (x);
}
