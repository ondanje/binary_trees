#include "binary_trees.h"
/**
 * cmp_depth - compares depth
 *
 * @tree: tree
 * Return: size
 */

int cmp_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else
	{
		return (cmp_depth(tree->left) + 1 + cmp_depth(tree->right));
	}
}
/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: node
 * Return: 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int hei_left = 0;
	int hei_right = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree && (!tree->left && !tree->right))
	{
		return (1);
	}

	hei_left = cmp_depth(tree->left);
	hei_right = cmp_depth(tree->right);

	if ((hei_left - hei_right) == 0)
	{
		return (1);
	}

	return (0);
}
