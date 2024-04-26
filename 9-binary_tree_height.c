#include "binary_trees.h"

/**
 * binary_tree_height - calculate tree height
 * @tree: pointer to binary_tree_t node
 * Return: size_t (height)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (-1);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (1 + (left > right ? left : right));
}
