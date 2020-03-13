#include "binary_trees.h"


/**
 * array_to_avl - build
 * Return: pointer
 * @size: number
 * @array: pointer
 *
 *
 **/


avl_t *array_to_avl(int *array, size_t size)
{

	size_t x;
	avl_t *tree;

	tree = NULL;

	for (x = 0; x < size; x++)
	{
		avl_insert(&tree, array[x]);
	}

	if (x == size)
		return (tree);

	return (NULL);


}
