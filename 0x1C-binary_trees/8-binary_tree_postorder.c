#include "binary_trees.h"

/**
 * binary_tree_postorder - perform a function on a tree via postorder traversal
 *
 * @tree: tree to traverse
 * @func: function to perform on each node's value
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
