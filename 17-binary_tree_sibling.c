#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: pointer to node to find sibling
 * Return: sibling of node otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);
}
