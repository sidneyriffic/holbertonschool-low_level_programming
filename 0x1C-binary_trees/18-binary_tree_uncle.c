#include "binary_trees.h"

/**
 * binary_tree_uncle - gets the uncle node in a binary tree
 *
 * @node: node to get uncle of
 *
 * Return: address of uncle if exists, NULL otherwise.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	node = node->parent;
	if (node->parent == NULL || node->parent->left == NULL
	    || node->parent->right == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
