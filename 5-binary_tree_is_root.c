#include "binary_trees.h"

/**
 * @binary_tree_is_root: checks node is root
 * 
 * @node: node to check 
 * return: int 
 */

int binary_tree_is_root(const binary_tree_t *node)
{
    return ((node || node->parent) ? 0 : 1);
}