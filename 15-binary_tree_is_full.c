#include "binary_trees.h"

/**
 * @brief 
 * binary-tree-is-full: checks if binary is full
 * @tree: tree 
 * Return: int 
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    if (!tree)
    {
        return (0);
    }
    if (!tree->right && !tree->left)
    {
        return (1);
    }

    if (tree->right && tree->left)
    {
        return (binary_tree_is_full(tree->left) &&
        binary_tree_is_full(tree->right));
    }

    return (0);
}