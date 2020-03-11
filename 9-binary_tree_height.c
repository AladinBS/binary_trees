#include "binary_trees.h"


/**
 * recursive_height - height measure
 * @tree: tree
 * Return: height
 *
 *
 **/


size_t recursive_height(const binary_tree_t *tree)
{
	size_t x1 = 0;
	size_t x2 = 0;

	if (tree == NULL)
		return (0);

	x1 = recursive_height(tree->left);
	x2 = recursive_height(tree->right);

	if (x1 > x2)
		return (x1 + 1);

	return (x2 + 1);
}


/**
 * binary_tree_height - recursive_height
 * @tree: tree
 * Return: height
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_height(tree) - 1);
}
