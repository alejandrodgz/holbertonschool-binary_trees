#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibiling of node
 * @node: node to find it sibilings
 * Return: sibiling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp = node, *tmp1 = node->parent;

	if (node == NULL)
		return (tmp);
	if (node->parent == NULL)
		return (NULL);
	if (tmp1->left == NULL || tmp1->right == NULL)
		return (NULL);
	if (tmp1->right != tmp)
		return (tmp1->right);
	return (tmp1->left);
}
