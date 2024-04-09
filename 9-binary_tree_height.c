#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a given binary tree.
 * @tree: A pointer to the root node of the binary tree.
 * Return: The height of the binary tree, or 0 if `tree` is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left_height = 0;
        size_t right_height = 0;
        size_t height = 0;

        if (NULL == tree)
        {
                return (0);
        }

        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);

        height = (left_height > right_height) ? left_height + 1 : right_height + 1;

        return (height);
}
