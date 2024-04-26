#include "binary_trees.h"

/**
 * binary_tree_height - calculate tree height
 * @tree: pointer to binary_tree_t node
 * Return: size_t (height)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;
	const binary_tree_t *ptr;

	if (!tree)
		return (0);

	ptr = tree;
	for (height = 0 ;; height++)
	{
		if (!ptr->left && !ptr->right)
			break;
		ptr =  (ptr->left) ? ptr->left : ptr->right;
	}
	return (height);
}
