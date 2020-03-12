#include "binary_trees.h"


/**
 * binary_tree_size - size of tree
 * Return: size
 * @tree: tree
 *
 *
 **/


size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);

}


/**
 * binary_tree_is_complete - calls function
 * @tree: tree
 * Return: 1 or 0
 *
 *
 */


int binary_tree_is_complete(const binary_tree_t *tree)
{

	size_t cnodes;

	if (tree == NULL)
		return (0);

	cnodes = binary_tree_size(tree);

	return (tree_is_complete(tree, 0, cnodes));

}


/**
 * tree_is_complete - check
 * @tree: pointer
 * @i: node
 * @cnodes: number
 * Return: 1 or 0
 *
 *
 */


int tree_is_complete(const binary_tree_t *tree, int i, int cnodes)
{

	if (tree == NULL)
		return (1);

	if (i >= cnodes)
		return (0);

	return (tree_is_complete(tree->left, (2 * i) + 1, cnodes) &&
		tree_is_complete(tree->right, (2 * i) + 2, cnodes));

}
