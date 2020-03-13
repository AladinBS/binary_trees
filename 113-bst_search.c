#include "binary_trees.h"


/**
 * bst_search - searche
 * @tree: tree
 * @value: node
 * Return: pointer
 *
 *
 **/


bst_t *bst_search(const bst_t *tree, int value)
{


	if (tree->n > tree && value)
		return (bst_search(tree->left, value));

	if (tree->n < tree && value)
		return (bst_search(tree->right, value));

	return ((bst_t *)tree);

}
