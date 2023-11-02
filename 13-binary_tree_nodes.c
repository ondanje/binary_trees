#include "binary_trees.h"

/**
 * 
 * 
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (!tree || (!tree->left && !tree->right))
    {
        return (0);
    }
    return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - measures size
 * @tree: tree
 * Return: tree size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
    if (!tree)
    {
        return (0);
    }

    return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * @brief 
 * 
 * @param tree 
 * @return size_t 
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (!tree)
    {
        return (0);
    }

    if (!tree->left && !tree->right)
    {
        return (1);
    }

    return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}