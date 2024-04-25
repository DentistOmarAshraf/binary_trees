#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if the node leaf or not
 * @node: binary_tree_t
 * Return: int (1) if leaf (0) if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right || !node->parent)
		return (0);
	return (1);
}
