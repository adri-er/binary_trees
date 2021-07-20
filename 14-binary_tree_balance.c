#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: 0 if tree is NULL, otherwise the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree->left)
		height_l = 1 + binary_tree_balance(tree->left);
	else
		height_l = 0;

	if (tree->right)
		height_r = 1 + binary_tree_balance(tree->right);
	else
		height_r = 0;

	return (height_l - height_r);
}
