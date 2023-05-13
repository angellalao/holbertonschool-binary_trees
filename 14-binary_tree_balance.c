#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: The balance factor of the binary tree. If `tree` is `NULL`, the
 * function returns 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	balance = 0;
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_height(tree->left) -
		binary_tree_height(tree->right));
}
