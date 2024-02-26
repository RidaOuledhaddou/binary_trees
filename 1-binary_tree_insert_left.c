#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node in the left of another node
 * @parent: pointer in the node to insert the left node
 * @value: value
 *
 * Return: pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *N = NULL, *previous_left_child = NULL;

	if (!parent)
		return (NULL);

	N = binary_tree_node(parent, value);
	if (!N)
		return (NULL);

	if (parent->left)
	{
		previous_left_child = parent->left;
		parent->left = N;
		N->left = previous_left_child;
		previous_left_child->parent = N;
	}
	else
		parent->left = N;

	return (N);
}
