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
 * get_number_of_nodes - return number of nodes excluding root
 * @tree: pointer to root
 * Return: number of nodes
 */
int get_number_of_nodes(const binary_tree_t *tree)
{

	int left_nodes_num, right_nodes_num;

	if (tree == NULL)
	{
		return (-1);
	}
	if ((tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	left_nodes_num = get_number_of_nodes(tree->left) + 1;
	right_nodes_num = get_number_of_nodes(tree->right) + 1;

	return (left_nodes_num + right_nodes_num);
}
/**
 * _pow - pow
 * @a: a
 * @b: b
 * Return: a powered to b
 */
int _pow(int a, int b)
{
	int i;

	for (i = 1; i <= b; i++)
	{
		a *= 2;
	}
	return (a);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: A pointer to the root of the binary tree.
 * Return: 1 if is full or 0 is not full.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h1 = height(tree->left), h2 = height(tree->right),
	bf = h1 - h2;

	if (tree == NULL)
		return (0);

	else if (!(bf) && binary_tree_is_full(tree)
				&& get_number_of_nodes(tree) + 1 == (_pow(2, h1 + h2)) - 1)
		return (1);
	else
		return (0);
}
