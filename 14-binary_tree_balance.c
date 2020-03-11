#include "binary_trees.h"


/**
 * recursive_height - height of a tree
 * Return: height
 * @tree: tree
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
 * binary_tree_height - calls recursive_height
 * Return: height
 * @tree: tree
 *
 *
 **/


size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (recursive_height(tree) - 1);
}


/**
 * binary_tree_balance - calls recursive_balance
 * Return: balance factor
 * @tree: tree
 *
 *
 **/


int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
