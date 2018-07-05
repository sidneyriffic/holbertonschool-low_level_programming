#include "binary_trees.h"

/**
 * binary_tree_sibling - gets the sibling node in a binary tree
 *
 * @node: node to get sibling of
 *
 * Return: address of sibling if exists, NULL otherwise.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
