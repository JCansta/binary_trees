#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_inorder - go trough a binary tree
 *@tree: the pointer to the root
 *@func: is a pointer to a function to call for each node
 *Return: 1 if is a root 0 if not
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
