#include "binary_trees.h"
/**
 * binary_tree_postorder : travel through a binary tree
 * Return: nothing
 * @tree: tree
 * @func: pointer
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	binary_tree_postorder(tree->right, func);
	binary_tree_postorder(tree->left, func);
	func(tree->n);
}
