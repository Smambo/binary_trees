#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value of new node
 * Return: pointer to the new node, otherwise NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new != NULL)
	{
		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
		return (new);
	}
	else
		return (NULL);
}
