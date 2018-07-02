#include "binary_trees.h"

size_t find_height(const binary_tree_t *tree, size_t height);

/**
 * binary_tree_height - return height of binary tree
 *
 * @tree: root of tree to get height of
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (find_height(tree, 0) - 1);
}

/**
 * find_height - find height of binary tree recursively
 *
 * @tree: tree to find height of
 * @height: height of tree
 *
 * Return: height of tree. 0 if NULL
 */
size_t find_height(const binary_tree_t *tree, size_t height)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (height);
	height++;
	height_left = find_height(tree->left, height);
	height_right = find_height(tree->right, height);
	if (height_left > height_right)
		return (height_left);
	return (height_right);
}
