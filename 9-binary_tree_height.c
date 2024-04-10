#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a given binary tree.
 * @tree: A pointer to the root node of the binary tree.
 * Return: The height of the binary tree, or 0 if `tree` is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;
	if (tree == NULL)
	{
		return (0);
	}
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h > right_h)
        {
	 return (1 + left_h);
	}
	else
	{
		
		return (1 + right_h);
	}
}
