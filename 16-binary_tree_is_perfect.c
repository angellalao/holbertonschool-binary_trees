#include "binary_trees.h"
/**
 * _binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the node to measure the height
 *
 * Return: Height of the binary tree starting at @tree
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	int r_height;
	int l_height;

	if (!tree)
	{
		return (0);
	}
	r_height = _binary_tree_height(tree->right);
	l_height = _binary_tree_height(tree->left);

	return (1 + ((r_height >= l_height) ? r_height : l_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	if (tree->left && tree->right)
	{
		if (_binary_tree_height(tree->left) !=
		    _binary_tree_height(tree->right))
		{
			return (0);
		}
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}

	return (0);
}
