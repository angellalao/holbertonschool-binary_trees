#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: pointer to the node to measure the depth of
 *
 * Return: the depth of the node, or 0 if the node is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int left_depth;
	int right_depth;

	if (tree == NULL)
	{
		return (0);
	}

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	if (left_depth > right_depth)
	{
		return (left_depth + 1);
	}
	else
	{
		return (right_depth + 1);
	}
}
