#include "binary_trees.h"

/**
 * binary_tree_nodes - return number of nodes with one child in a binary tree
 *
 * @tree: tree to get size of
 *
 * Return: size of tree, 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	char onechild = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		onechild = 1;
	return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + onechild);
}
