#include "binary_trees.h"

/**
 * binary_tree_is_full - give tree binary full.
 * @tree: A pointer to the node of the binary tree.
 * Return: binary tree, 1 if is full or 0 is not full.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
