#include "binary_trees.h"

/**
 * binary_tree_height - Function to measure the height of tree.
 * @tree: pointer to the root node of tree to measure height.
 *
 * Return: 0 if tree is null.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height =  binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	return (1 + (right_height > left_height ? left_height : right_height));
}
