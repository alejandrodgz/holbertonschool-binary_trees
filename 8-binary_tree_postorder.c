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
	traverse(trav->right, func);
	func(trav->n);
}
/**
 * binary_tree_postorder - traverse a tree
 * @tree: tree to traverse
 * @func: function for printing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	traverse(tree->left, func);
	traverse(tree->right, func);
	func(tree->n);
}
