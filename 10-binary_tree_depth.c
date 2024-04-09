#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a given binary tree.
 * @tree: A pointer to the root node of the binary tree.
 * Return: The depth of the binary tree, or 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
        size_t depth = 0;

        if (tree == NULL)
                return (0);

        while (tree->parent != NULL)
        {
                depth++;
                tree = tree->parent;
        }

        return (depth);
}
