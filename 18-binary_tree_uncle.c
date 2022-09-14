#include "binary_trees.h"

/**
 * binary_tree_uncle - find sibiling of node
 * @node: node to find it sibilings
 * Return: sibiling
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == NULL || node->parent->parent->right == NULL)
		return (NULL);
	if (node->parent->parent->right != node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
