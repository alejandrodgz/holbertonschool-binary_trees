#include "binary_trees.h"

/**
 * h1 - height of binary tree
 * @tree: tree to measure
 * @a: counter
 * Return: height of tree
 */

size_t h1(const binary_tree_t *tree, size_t a)
{
	binary_tree_t *tmp = (binary_tree_t *)tree;
	size_t left, right;

	if (tree == NULL)
		return (a);

	right = h1(tmp->right, a + 1);
	left = h1(tmp->left, a + 1);
	if (right > left)
		return (right);
	else
		return (left);
}
/**
 * binary_tree_height - height of binary tree
 * @tree: tree to measure
 * Return: height of tree
 */



size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t result, a = 0;

	if (tree == NULL)
	{
		return (0);
	}
	result = h1(tree, a);
	return (result - 1);
}
