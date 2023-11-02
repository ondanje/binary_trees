#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check node is a leaf
 * @node: node
 * Return: 1 if node
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    return ((!node || node->left || node->right) ? 0 : 1);
}