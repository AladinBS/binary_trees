#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks
 * Return: 1 or 0
 * @node: pointer
 *
 *
 **/


int binary_tree_is_leaf(const binary_tree_t *node)
{

	int x = 0;

	if (node && !(node->left) && !(node->right))
		x = 1;

	return (x);

}


/**
 * check_parent - checks
 * @tree: node
 * Return: 1 or 0
 *
 *
 **/


int check_parent(const binary_tree_t *tree)
{
	const binary_tree_t *x1;
	const binary_tree_t *x2;

	if (tree == NULL || tree->parent == NULL || tree->parent->parent == NULL)
		return (1);

	x1 = tree->parent;
	x2 = prnt->parent;

	while (x1 && x2)
	{
		if (x1->n < x2->n && tree->n >= x2->n)
			return (0);

		if (x1->n > x2->n && tree->n <= x2->n)
			return (0);

		x1 = prnt->parent;
		x2 = x1->parent;
	}

	return (1);
}


/**
 * check_is_bst - checks
 * Return: 1 or 0
 * @tree: tree
 *
 *
 **/


int check_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if (binary_tree_is_leaf(tree))
		return (1);

	if (tree->left && tree->left->n >= tree->n)
		return (0);

	if (tree->right && tree->right->n <= tree->n)
		return (0);

	if (!check_parent(tree->left) || !check_parent(tree->right))
		return (0);

	return (check_is_bst(tree->left) && check_is_bst(tree->right));
}


/**
 * binary_tree_is_bst - calls to check_is_bst to check if tree is BST
 * @tree: tree root
 * Return: 1 if tree is a BST, 0 otherwise
 *
 *
 **/


int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (check_is_bst(tree));
}
