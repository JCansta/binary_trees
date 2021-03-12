#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_if_full - chekc if a binary tree is full
 *@tree: the pointer to the root
 *Return: the leaves of the binary tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return(binary_tree_is_full(tree->left) &&
		       binary_tree_is_full(tree->right));
	return (0);
}
