#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_left - insert in the left of a tree
 *@parent: the pointer to the node
 *@value: the value tu put inside the node
 *Return: pointer to the new node or NULL if failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	else
		new->left = new->right = NULL;

	new->parent = parent;
	new->n = value;
	parent->left = new;

	return (new);
}
