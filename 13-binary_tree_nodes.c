#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with children
 * @tree: tree to measure
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		return (binary_tree_nodes(tree->right) + 1 +
		binary_tree_nodes(tree->left));
	return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}
