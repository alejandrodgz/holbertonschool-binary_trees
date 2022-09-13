#include "binary_trees.h"

size_t h1(const binary_tree_t *tree, size_t a)
{
	binary_tree_t *tmp = (binary_tree_t *)tree;
	size_t left, right;

	if (tree == NULL)
		return (a);
	else
	{
		right = h1(tmp->right, a + 1);
		left = h1(tmp->left, a + 1);
	}
	if (right > left)
		return (right);
	else
		return (left);
}
/**
 * 
 * 
 * 
 * 
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t result, a = 0;

	if (tree == NULL)
	{
		return (0);
	}
	result = h1(tree, a);
	return(result - 1);	
}
