#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to insert node as right child.
 * @parent: pointer to node to insert child.
 * @value: value inserted to the add.
 *
 * Return: node_right.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (parent == NULL)
	{
		return (NULL);
	}

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);
}
