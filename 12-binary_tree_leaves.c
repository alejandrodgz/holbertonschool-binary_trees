#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves
 * @tree: tree to measure
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (binary_tree_leaves(tree->right) + 1 +
		binary_tree_leaves(tree->left));
	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
