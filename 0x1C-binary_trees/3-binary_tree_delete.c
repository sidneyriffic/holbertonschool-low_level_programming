#include <stdlib.h>
#include "binary_trees.h"

void binary_tree_del_recur(binary_tree_t *node);

/**
 * binary_tree_delete - deletes a binary tree
 *
 * @tree: root of tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_del_recur(tree);
}

/**
 * binary_tree_del_recur - delete a tree after verifying root is not null
 *
 * @node: tree node to delete
 *
 * Return: void
 */
void binary_tree_del_recur(binary_tree_t *node)
{
	if (node->left != NULL)
		binary_tree_del_recur(node->left);
	if (node->right != NULL)
		binary_tree_del_recur(node->right);
	free(node);
}
