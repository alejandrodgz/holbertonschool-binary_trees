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
	func(trav->n);
	traverse(trav->left, func);
	traverse(trav->right, func);
}
/**
 * binary_tree_preorder - traverse a tree
 * @tree: tree to traverse
 * @func: function for printing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	traverse(tree->left, func);
	traverse(tree->right, func);
}
