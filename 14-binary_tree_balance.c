#include "binary_trees.h"

/**
 * height - give a values of height.
 * @tree: A pointer to the node of the binary tree.
 * Return: The binary tree, -1 if is null.
 */

int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	else
	{
		int left_height = height(tree->left);
		int right_height = height(tree->right);

		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}

/**
 * binary_tree_balance - give tree and call pointer.
 * height - function to call tree left and right of the node.
 * @tree: A pointer to the node of the binary tree.
 * Return: The balance of the binary tree, or 0..
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (height(tree->left) - height(tree->right));
}
