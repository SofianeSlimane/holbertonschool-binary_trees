#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to be stored in new node
 * Return: a pointer to the newly created node or NULL on failure
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right == NULL)
	{
		parent->right = newNode;
		return (newNode);
	}
	parent->right->parent = newNode;
	newNode->right = parent->right;
	parent->right = newNode;

	return (newNode);
}
