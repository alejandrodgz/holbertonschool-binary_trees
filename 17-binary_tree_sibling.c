#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibiling of node
 * @node: node to find it sibilings
 * Return: sibiling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);
	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	if (node->parent->right != node)
		return (node->parent->right);
	return (node->parent->left);
}
