#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a
 *                       node in a binary tree.
 * @N: A pointer to the node to find the sibling of.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *N)
{
	if (N == NULL || N->parent == NULL)
		return (NULL);
	if (N->parent->left == N)
		return (N->parent->right);
	return (N->parent->left);
}
