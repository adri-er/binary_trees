#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 *
 * Return: 0 if tree is NULL, size of the tree otherwise.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t leaves = 0;

    if (tree)
    {
        if (!tree->left && !tree->right)
            leaves += 1;
        leaves += binary_tree_leaves(tree->left);
        leaves += binary_tree_leaves(tree->right);
    }
    return (leaves);
}
