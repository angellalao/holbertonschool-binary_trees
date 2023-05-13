#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 *
 * @parent: pointer to the parent node of the new node
 * @value: value to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node;

        new_node = malloc(sizeof(*new_node));

        if (new_node == NULL)
        {
                return (NULL);
        }

        new_node->n = value;
        new_node->left = NULL;
        new_node->right = NULL;
        new_node->parent = parent;

        return (new_node);
}
