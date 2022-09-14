#include "binary_trees.h"

/**
 * binary_tree_depth - depth of tree
 * @tree: tree to measure
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *tmp = (binary_tree_t *)tree;
	size_t a = 0;

	if(tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	while (tmp != NULL)
	{
		tmp = tmp->parent;
		a++;
	}
	a--;
	return (a);
}
