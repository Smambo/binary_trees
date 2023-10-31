#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right-child of another node
 * @parent: pointer to node to insert right-child in
 * @value: value to store in new node
 * Return: pointer to new node, otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!(parent))
		return (NULL);
	new = malloc(sizeof(binary_tree_t));

	if (new != NULL)
	{
		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;

		if (parent->right)
		{
			parent->right->parent = new;
			new->right = parent->right;
			parent->right = new;
		}
		else
			parent->right = new;

		return (new);
	}
	else
		return (NULL);
}
