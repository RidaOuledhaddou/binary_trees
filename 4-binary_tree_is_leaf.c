#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @n: A pointer.
 * Return: 1 if the node is a leaf.
 */
int binary_tree_is_leaf(const binary_tree_t *n)
{
	if (!n)
	{
		return (0);
	}
	if (!n->left && !n->right)
	{
		return (1);
	}
	return (0);
}
