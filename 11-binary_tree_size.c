#include "binary_trees.h"

/**
 * h1 - height of binary tree
 * @tree: tree to measure
 * Return: size
 */

size_t h1(const binary_tree_t *tree)
{
	binary_tree_t *tmp = (binary_tree_t *)tree;

	if (tree == NULL)
		return (0);
	return (h1(tmp->right) + 1 + h1(tmp->left));
}

/**
 * binary_tree_size - size of binary tree
 * @tree: tree to measure
 * Return: height of tree
 */



size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t result;

	if (tree == NULL)
	{
		return (0);
	}
	result = h1(tree);
	return (result);
}
