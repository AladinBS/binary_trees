#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child
 * @parent: parent
 * @value: value
 * Return: pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->right = parent->right;
	new->left = NULL;

	if (parent->right != NULL)
		parent->right->parent = new;

	parent->right = new;
	return (new);
}
