#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent of the newly created node
 * @value: value to be stored in the new node created
 * Return: a pointer to the new node or NULL if it failed
 */




binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;
	newNode->parent = parent;

	return (newNode);
}
