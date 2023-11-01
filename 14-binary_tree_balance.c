#include "binary_trees.h"

/**
 * modified_tree_height - measures height of binary tree
 * @tree: pointer to root node of tree to measure
 * Return: height
 */
size_t modified_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = modified_tree_height(tree->left);
	right_height = modified_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - measures balance factor of binary tree
 * @tree: pointer to root node of tree to measure
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side, right_side, balance;

	if (tree == NULL)
		return (0);

	left_side = modified_tree_height(tree->left);
	right_side = modified_tree_height(tree->right);
	balance = left_side - right_side;

	return (balance);
}
