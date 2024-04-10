#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree
 * Return: size of tree or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left_h = binary_tree_size(tree->left);
	right_h = binary_tree_size(tree->right);

	return (left_h + right_h + 1);
}
