#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_preorder - go trough a binary tree
 *@tree: the pointer to the root
 *@func: is a pointer to a function to call for each node
 *Return: 1 if is a root 0 if not
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
