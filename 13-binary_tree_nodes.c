#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at
 * least one childe in a binary tree
 * @tree: tree
 * Return: 0 if tree is NULL, 1 if the node has at least one child
 * or 0 if node has no children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count;
	size_t right_count;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left != NULL && tree->right == NULL) ||
	(tree->left == NULL && tree->right != NULL))
	{
		return (1);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	return (left_count + right_count + 1);
}
