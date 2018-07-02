#include "binary_trees.h"


/**
 * binary_tree_depth - measure depth of a node in binary tree
 *
 * @tree: node to get depth of
 *
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *ptr = (binary_tree_t *) tree;

	if (tree == NULL)
		return (0);
	while (ptr->parent != NULL)
	{
		depth++;
		ptr = ptr->parent;
	}
	return (depth);
}
