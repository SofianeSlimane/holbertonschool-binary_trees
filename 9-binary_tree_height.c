#include "binary_trees.h"



size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);
	size_t max_height;	
	if (left_height > right_height)
	{
		max_height = left_height + 1;
		return (max_height);
	}
	else
	{
		max_height = right_height + 1;
		return (max_height);
	}
	
}

