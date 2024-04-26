#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (0 + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
