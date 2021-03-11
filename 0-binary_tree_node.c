#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_node - create a binary tree node
 *@parent: the pointer to the node
 *@value: the value tu put inside the node
 *Return: pointer to the new node or NULL if failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->left = new->right = NULL;
	new->n = value;
	return (new);
}
