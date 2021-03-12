#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_is_leaf - check if is a leaf
 *@node: the pointer to the node
 *Return: 1 if is a leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left == NULL && node->right == NULL && node)
		return (1);
	else
		return (0);
}
