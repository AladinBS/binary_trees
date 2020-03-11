#include "binary_trees.h"


/**
 * binary_tree_sibling - sibling of a node
 * Return: pointer
 * @node: node
 *
 *
 **/


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node->parent == NULL || node == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	return (node->parent->right);
}
