#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Return: 0 if tree is null, otherwise the nodes with child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t childs = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			childs += 1;
		childs += binary_tree_nodes(tree->left);
		childs += binary_tree_nodes(tree->right);
	}
	return (childs);
}
