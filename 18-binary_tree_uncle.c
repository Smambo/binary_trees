#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of a node
 * @node: pointer to node to find uncle
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *father, *grandparent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	father = node->parent;
	grandparent = father->parent;

	if (grandparent)
	{
		if (grandparent->left == father)
			return (grandparent->right);
		else
			return (grandparent->left);
	}
	else
		return (NULL);
}
