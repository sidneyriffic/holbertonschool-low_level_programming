#include "binary_trees.h"

/**
 * binary_tree_size - return size of binary tree
 *
 * @tree: tree to get size of
 *
 * Return: size of tree, 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}
