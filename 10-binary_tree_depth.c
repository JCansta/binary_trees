#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_depth - calculate the depth of the binary tree
 *@tree: the pointer to the root
 *Return: the size of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	if (tree->parent)
	{
		depth = 1 + binary_tree_depth(tree->parent);
		return (depth);
	}
	return (0);
}
