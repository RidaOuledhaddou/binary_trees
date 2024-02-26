#include "binary_trees.h"

/**
 * binary_tree_delete - deletes
 * @trees: pointer in The Noeud
 *
 * Return: delete the node in she not return anything
 */
void binary_tree_delete(binary_tree_t *trees)
{
	if (!trees)
		return;
	binary_tree_delete(trees->left);
	binary_tree_delete(trees->right);
	free(trees);
}
