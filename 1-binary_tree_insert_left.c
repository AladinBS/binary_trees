#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child
 * Return: pointer to the new node
 * @parent: parent of node
 * @value: value of node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = parent->left;
	if (parent->left != NULL)
		parent->left->parent = new;

	parent->left = new;
	return (new);
}
