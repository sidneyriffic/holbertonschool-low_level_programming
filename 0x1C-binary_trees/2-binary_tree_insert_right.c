#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node with value to right of given node
 * if right node already exists, make existing node right child of inserted
 *
 * @parent: parent node to insert under
 * @value: value of new node
 *
 * Return: address of new node, NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->right = parent->right;
	new->left = NULL;
	new->parent = parent;
	parent->right = new;
	if (new->right != NULL)
		new->right->parent = new;
	return (new);
}
