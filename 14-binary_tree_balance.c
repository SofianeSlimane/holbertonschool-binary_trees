#include "binary_trees.h"

/**
 * binary_tree_balance - give tree binary balance.
 * @height: A pointer to the height of the binary tree.
 * @tree: A pointer to the node of the binary tree.
 * Return: The balance of the binary tree, or 0 or height.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);
        else
                return height(tree->left) - height(tree->right);
}

int main(void)
{
        binary_tree_t *root = malloc(sizeof(binary_tree_t));
        root->n = 1;
        root->left = malloc(sizeof(binary_tree_t));
        root->left->n = 2;
        root->left->left = NULL;
        root->left->right = NULL;
        root->right = malloc(sizeof(binary_tree_t));
        root->right->n = 3;
        root->right->left = NULL;
        root->right->right = NULL;

        int balance = binary_tree_balance(root);
        printf("Balance factor: %d\n", balance);

        free(root->left);
        free(root->right);
        free(root);

        return (0);
}
