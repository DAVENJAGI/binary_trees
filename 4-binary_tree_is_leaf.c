#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf.
 * @node: pointer to node to check.
 * Return: 1 if leaf, 0 otherwise.
 * and if null, return 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	return (node->left == NULL && node->right == NULL);
}
