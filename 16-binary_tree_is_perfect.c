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

    if (tree->left)
        height_l = 1 + height_2(tree->left);
    else
        height_l = 0;

    if (tree->right)
        height_r = 1 + height_2(tree->right);
    else
        height_r = 0;
    
    if (height_l > height_r)
        return (height_l);
    else
        return (height_r);
}

/**
 * size_2 - measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 *
 * Return: size of a binary tree, otherwise 0.
 */
size_t size_2(const binary_tree_t *tree)
{
    size_t size = 0;

    if (tree)
    {
        size += 1;
        size += size_2(tree->left);
        size += size_2(tree->right);
    }
    return (size);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: value to be powered.
 * @y: the power, times x is multiplied.
 *
 * Return: the power y of x or -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 0 if the tree is NULL or not perfect, otherwise 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, size, perfect_size = 0, iterator = 0;

    if (tree == NULL)
        return (0);

    height = height_2(tree);
    size = size_2(tree);

    while (iterator <= height)
    {
        perfect_size += _pow_recursion(2, iterator);
        iterator++;
    }

    if (perfect_size != size)
        return (0);
    else
        return (1);
}
