#include "binary_trees.h"

/**
 * binary_tree_is_full_recursive - Recursive functions to check if full.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: if tree is NULL or not full 0, otherwise 1.
 */
int binary_tree_is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    (binary_tree_is_full_recursive(tree->left) == 0) ||
		    (binary_tree_is_full_recursive(tree->right) == 0))
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: if tree is NULL or not full 0, otherwise 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_is_full_recursive(tree));
	}
}
