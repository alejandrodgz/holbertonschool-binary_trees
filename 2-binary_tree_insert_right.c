#include "binary_trees.h"

/**
 * binary_tree_insert_right - right child
 * @parent: parent
 * @value: value
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
		return (new_node);
	}
	old_node = parent->right;
	parent->right = new_node;
	new_node->parent = parent;
	new_node->n = value;
	new_node->right = old_node;
	new_node->left = NULL;
	old_node->parent = new_node;
	return (new_node);
}
