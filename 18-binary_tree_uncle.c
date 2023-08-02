#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of node in a binary tree
 * @node: A pointer to the node to find the uncle of
 *
 * Return: If node is NULL or there is no sibling - NULL
 * Otherwise - A pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
		node->parent == NULL ||
		node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
