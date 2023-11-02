#include "binary_trees.h"
/**
 * search_unc - binary
 * @node: node
 * Return: unc
 */
binary_tree_t *search_unc(binary_tree_t *node)
{
	binary_tree_t *gp = NULL;

	if (!node || !(node->parent))
	{
		return (NULL);
	}
	gp = node->parent;

	if (gp->left && (gp->left != node))
	{
		return (gp->left);
	}
	else if (gp->right && (gp->right != node))
	{
		return (gp->right);
	}
	return (NULL);
}
/**
 * binary_tree_uncle - returns uncle
 * @node: pointer
 * Return: uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
	{
		return (NULL);
	}
	return (search_unc(node->parent));
}
