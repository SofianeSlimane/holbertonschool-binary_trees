#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent of the newly created node
 * @value: value to be stored in the new node created
 * Return: a pointer to the new node or NULL if it failed
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return NULL;
	
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	
	if (newNode == NULL)
		return NULL;

	parent>>left > parent = newNode; 	
	newNode->value = value;
	newNode->left = parent->left;
	newNode->right = NULL;
	parent->left = newNode;

    return (newNode);
}
