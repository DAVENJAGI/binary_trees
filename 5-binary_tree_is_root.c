#include "binary_trees.h"

/**
 * binary_tree_is_root -check whether root.
 * @node: pointer to node to check.
 *
 * Return: 1 if node root, 0 ptherwise, and o if null.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->parent == NULL);
}
