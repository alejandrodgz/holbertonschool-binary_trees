#include "binary_trees.h"

/**
 * traverse - traverse tree
 * @trav: tree to traverse
 * @func: function
 */


void traverse(binary_tree_t *trav, void (*func)(int))
{
	if (trav == NULL)
		return;
	traverse(trav->left, func);
	func(trav->n);
	traverse(trav->right, func);
}
/**
 * binary_tree_inorder - traverse a tree
 * @tree: tree to traverse
 * @func: function for printing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	traverse(tree->left, func);
	func(tree->n);
	traverse(tree->right, func);
}
