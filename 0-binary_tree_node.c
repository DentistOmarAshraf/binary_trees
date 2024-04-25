#include "binary_trees.h"
/**
 * binary_tree_node - function to build binary tree
 * @parent: binary_tree_t node
 * @value: binary_tree_t node ->n
 * Return: binary_tree_t pointer
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	if (!parent)
	{
		parent = new;
		return (new);
	}
	if (parent->left == NULL)
	{
		parent->left = new;
		parent->left->parent = parent;
		return (new);
	}
	parent->right = new;
	parent->right->parent = parent;
	return (new);
}
