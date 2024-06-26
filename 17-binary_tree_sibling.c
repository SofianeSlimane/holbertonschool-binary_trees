#include "binary_trees.h"

/**
 * binary_tree_sibling - function that give sibling of a node.
 * @node: A pointer to the node of the binary tree.
 * Return: A pointer to the sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
