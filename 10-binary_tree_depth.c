#include "binary_trees.h"

/**
 * binary_tree_depth - Function to measure the depth of tree.
 * @tree: pointer to the root node of tree to measure height.
 *
 * Return: 0 if tree is null.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}
	size_t depth = 0;

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
