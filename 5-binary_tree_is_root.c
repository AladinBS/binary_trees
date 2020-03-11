#include "binary_trees.h"
/**
 * binary_tree_is_root : sees if a node is root
 * Return: 1 if node is root
 * @node: pointer to node
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int x = 0;

	if (node && !(node->parent))
		x = 1;

	return (x);
}
