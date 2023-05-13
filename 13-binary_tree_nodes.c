#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root nodes of the tree to count the number of nodes
 * Return: Number of nodes in the tree with an least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
	{
		return (0);
	}
	nodes = 0;
	if (tree->left != NULL || tree->right != NULL)
	{
		nodes = nodes + 1;
	}
	nodes = nodes + binary_tree_nodes(tree->left);
	nodes = nodes + binary_tree_nodes(tree->right);
	return (nodes);
}
