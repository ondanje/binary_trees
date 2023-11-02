#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance
 * @tree: tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    int height_left, height_right;

    if (!tree)
    {
        return 0;
    }
    height_left = tree->left ? (int)binary_tree_height(tree->left) : -1;
    height_right = tree->right ? (int)binary_tree_height(tree->right) : -1;

    return (height_left - height_right);
}

/**
 * binary_tree_height - gets height 
 * 
 * @tree: tree 
 * return: size_t 
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_left = 0;
    size_t height_right  = 0;

    if (!tree)
    {
        return (0);
    }
    height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
    return (height_left > height_right ? height_left : height_right);
}