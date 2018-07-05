#include "binary_trees.h"

/**
 * get_height_perfect - get height of tree while checking for fullness
 *
 * @tree: tree to check
 *
 * Return: whether tree is balanced
 */
int get_height_perfect(binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);
	height_left = get_height_perfect(tree->left);
	if (height_left == 0)
		return (0);
	height_right = get_height_perfect(tree->right);
	if (height_right == 0)
		return (0);
	return (height_left + height_right + 1);
}


/**
 * binary_tree_is_perfect - return whether a binary tree is perfect
 *
 * @tree: tree to check for perfection
 *
 * Return: 1 for perfect, 0 for not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);
	height_left = get_height_perfect(tree->left);
	if (height_left == 0)
		return (0);
	height_right = get_height_perfect(tree->right);
	if (height_right != height_left)
		return (0);
	return (1);
}
