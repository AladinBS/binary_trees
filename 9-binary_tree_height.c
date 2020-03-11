#include "binary_trees.h"
/**
 * recursive_height - height measure
 * @tree: tree
 * Return: height
 */
size_t recursive_height(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);

	right = recursive_height(tree->right);
	left = recursive_height(tree->left);
	if (right > left)
		return (right + 1);

	return (left + 1);
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
