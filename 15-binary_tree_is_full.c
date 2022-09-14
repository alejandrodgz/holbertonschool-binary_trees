#include "binary_trees.h"

/**
 * binary_tree_is_full1 - counts the leaves
 * @tree: tree to measure
 * Return: number of leaves
 */

int binary_tree_is_full1(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->right != NULL && tree->left == NULL) ||
	(tree->left != NULL && tree->right == NULL))
		return (1);
	return (binary_tree_is_full1(tree->right) + binary_tree_is_full1(tree->left));
}

/**
 * binary_tree_is_full - counts the leaves
 * @tree: tree to measure
 * Return: number of leaves
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full1(tree) != 0)
		return (0);
	return (1);
}
