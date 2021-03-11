#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_right - insert in the right of a tree
 *@parent: the pointer to the node
 *@value: the value tu put inside the node
 *Return: pointer to the new node or NULL if failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	else
		new->left = new->right = NULL;

	new->parent = parent;
	new->n = value;
	parent->right = new;

	return (new);
}
