#include "binary_trees.h"

/**
 * height - returns height of a binary tree
 * @tree: A pointer to a node
 * Return: The binary tree, -1 if is null.
 */
int height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if ((tree == NULL) || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: A pointer to the root of the binary tree.
 * Return: 1 if is full or 0 is not full.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: A pointer to the root of the binary tree.
 * Return: 1 if is full or 0 is not full.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (((height(tree->left) - height(tree->right)) == 0)
								&& binary_tree_is_full(tree))
		return (1);
	else
		return (0);
}
