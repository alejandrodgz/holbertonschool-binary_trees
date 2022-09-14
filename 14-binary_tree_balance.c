#include "binary_trees.h"

/**
 * h1 - height of binary tree
 * @tree: tree to measure
 * @a: counter
 * Return: height of tree
 */

int h1(const binary_tree_t *tree, int a)
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
 * binary_tree_balance - factor of binary tree
 * @tree: tree to measure
 * Return: factor of tree
 */



int binary_tree_balance(const binary_tree_t *tree)
{
	int result, a = 0, b = 0, right, left;

	if (tree == NULL)
	{
		return (0);
	}
	left = h1(tree->left, a) - 1;
	right = h1(tree->right, b) - 1;
	result = left - right;
	return (result);
}
