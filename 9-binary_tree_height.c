#include "binary_trees.h"

/**
 * binary_tree_height - Function to measure the height of tree.
 * @tree: pointer to the root node of tree to measure height.
 *
 * Return: 0 if tree is null.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return 1 + binary_tree_height(tree->left) + binary_tree_height(tree->right);
	}
}
