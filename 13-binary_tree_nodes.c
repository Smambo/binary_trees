#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with atleast 1 child in a tree
 * @tree: pointer to root node of tree to count
 * Return: number of nodes otherwise 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0, left_node, right_node;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		nodes++;

	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);
	nodes += (left_node + right_node);
	return (nodes);
}
