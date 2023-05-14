#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find of sibling
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		sibling = node->parent->right;
	}
	else if (node == node->parent->right)
	{
		sibling = node->parent->left;
	}
	if (sibling == NULL)
	{
		return (NULL);
	}
	return (sibling);
}
