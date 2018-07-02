#include "binary_trees.h"

/**
 * binary_tree_is_leaf - return whether the given node is a leaf or not
 *
 * @node: node to check
 *
 * Return: 1 if leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
