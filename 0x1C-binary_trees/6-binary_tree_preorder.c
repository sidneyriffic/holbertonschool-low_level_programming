#include "binary_trees.h"

/**
 * binary_tree_preorder - perform a function on a tree via preorder traversal
 *
 * @tree: tree to traverse
 * @func: function to perform on each node's value
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
