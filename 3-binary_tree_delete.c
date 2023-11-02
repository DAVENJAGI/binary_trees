#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes the entire binary tree.
 * @tree: pointer to the root node of tree
 * Return: 0 on success.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	free(tree);
}
