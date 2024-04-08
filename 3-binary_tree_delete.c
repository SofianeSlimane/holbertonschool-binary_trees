#include "binary_trees.h"
/**
 *
 *
 *
 */




void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *pointer;
	binary_tree_t *pointer2;
	

	pointer = tree;
	pointer2 = tree;
	
		pointer = pointer->left;
		pointer2 = pointer->right;
		free(pointer->parent);
		free(pointer2->parent);
		free(pointer->left);
		free(pointer->right);
		free(pointer2->left);
		free(pointer2->right);
		free (pointer);
		free(pointer2);
		
}


