#include "binary_trees.h"
/**
 * binary_tree_leaves - count number of leaves in a binary tree
 * @tree: tree
 * Return: 0 if tree is null or 1 if node is a leaf node
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count;
	size_t right_count;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
		left_count = binary_tree_leaves(tree->left);
		right_count = binary_tree_leaves(tree->right);

	return (left_count + right_count);
}
