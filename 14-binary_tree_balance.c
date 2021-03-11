#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_balance - calculate the balance of the tree
 *@tree: the pointer to the root
 *Return: the leaves of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
/**
 *binary_tree_height - calculate the height of the binary tree
 *@tree: the pointer to the root
 *Return: the size of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Lroot, Rroot;

	if (tree)
	{
		Lroot = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		Rroot = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((Lroot > Rroot) ? Lroot : Rroot);

	}
	return (0);
}
