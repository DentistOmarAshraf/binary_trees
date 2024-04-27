#include "binary_trees.h"
/**
 * binary_tree_balance - check if the node has tow child
 * @tree: binary_tree_t node
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	if (tree->left && tree->right)
		return (2);
	return (-1);
}
