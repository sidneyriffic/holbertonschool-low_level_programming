#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node with value to left of given node
 * if left node already exists, make existing node left child of inserted
 *
 * @parent: parent node to insert under
 * @value: value of new node
 *
 * Return: address of new node, NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = parent->left;
	new->right = NULL;
	new->parent = parent;
	parent->left = new;
	if (new->left != NULL)
		new->left->parent = new;
	return (new);
}
