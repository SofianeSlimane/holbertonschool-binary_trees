#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another
 * @parent: pointer to the node to insert the left child in
 * @value: value to be stored in new node
 * Return: newNode if succeded or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;
	newNode->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = newNode;
		return (newNode);
	}
	parent->left->parent = newNode;
	newNode->left = parent->left;
	parent->left = newNode;

  	return (newNode);
}
