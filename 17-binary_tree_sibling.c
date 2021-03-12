#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_sibling - chekc the sibling
 *@node: the pointer to the root
 *Return: the leaves of the binary tree
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
