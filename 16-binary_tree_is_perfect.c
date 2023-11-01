#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

/**
 * tree_leaves - checks if leaves are at same level
 * @tree: pointer to root node of tree to check
 * @current: level of current leaf
 * @level: level of passed leaves
 * Return: bool (1 or 0)
 */
int tree_leaves(const binary_tree_t *tree, int current, int *level)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
	{
		if (*level == 0)
		{
			*level = current;
			return (1);
		}
		return (*level == current);
	}
	else
		return (tree_leaves(tree->left, current + 1, level)
				&& tree_leaves(tree->right, current + 1, level));
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node of tree to check
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int level = 0;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) && (!binary_tree_balance(tree)))
	{
		return (tree_leaves(tree, 0, &level));
	}
	return (0);
}
