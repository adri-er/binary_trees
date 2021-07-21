#include "binary_trees.h"

/**
 * height_2 - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height of the tree, 0 otherwise.
 */
size_t height_2(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree)
	{
		if (tree->left)
			height_l = 1 + height_2(tree->left);
		else
			height_l = 1;

		if (tree->right)
			height_r = 1 + height_2(tree->right);
		else
			height_r = 1;

		if (height_l > height_r)
			return (height_l);
		else
			return (height_r);
	}
	return (0);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: 0 if tree is NULL, otherwise the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0, balance_factor;

	height_l = height_2(tree->left);
	height_r = height_2(tree->right);
	balance_factor = height_l - height_r;
	return (balance_factor);
}
