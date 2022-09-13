#include "binary_trees.h"

/**
 * binary_tree_is_root - verify if node is a leaf
 * @node: node to verify
 * Return: 1 if node
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
