#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert node as left child.
 * @parent: pointer to node to insert child.
 * @value: value inserted to the add.
 *
 * Return: node_left.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL || parent == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;
	return (new_node);
}
