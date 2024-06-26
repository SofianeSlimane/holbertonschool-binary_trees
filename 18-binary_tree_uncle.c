#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree.
 * @node: A pointer to the node.
 * Return: A pointer to the uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
