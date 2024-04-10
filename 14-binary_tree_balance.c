#include "binary_trees.h"

/**
 * binary_tree_balance - give tree binary balance.
 * height - A pointer to the @height of the binary tree and give values.
 * @tree: A pointer to the node of the binary tree.
 * Return: The balance of the binary tree, or 0 or height.
 */

int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	while
	{
		int left_height = height(tree->left);
		int right_height = height(tree->right);

		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (height(tree->left) - height(tree->right));
}
