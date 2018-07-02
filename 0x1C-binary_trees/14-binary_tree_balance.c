#include "binary_trees.h"

/**
 * get_height - get height of a binary tree
 *
 * @tree: tree to get height of
 *
 * Return: height of tree
 */
size_t get_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		height_left = get_height(tree->left);
	if (tree->right != NULL)
		height_right = get_height(tree->right);
	if (height_left > height_right)
		return (height_left + 1);
	return (height_right + 1);
}

/**
 * binary_tree_balance - return balance factor of a binary tree
 *
 * @tree: tree to check
 *
 * Return: balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (get_height(tree->left) - get_height(tree->right));
}
