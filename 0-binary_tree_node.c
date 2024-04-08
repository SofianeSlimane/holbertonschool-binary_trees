#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the node
 * Return: a pointer to the new node or NULL on failure
 */





binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;
	newNode->parent = parent;

return (newNode);
}
