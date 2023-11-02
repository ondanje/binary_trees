#include "binary_trees.h"

/**
 * binary_tree_height_b -function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 *
*/
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t lheight = 0;
	size_t rheight = 0;

	if (!tree->left)
	{
		lheight = 1 + binary_tree_height_b(tree->left);
	}
	if (!tree->right)
	{
		rheight = 1 + binary_tree_height_b(tree->right);
	}

	if (lheight > rheight)
	{
		return (lheight);
	}

	return (rheight);
}

/**
 * binary_tree_balance - calculates balance factor
 * @tree: pointer
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t hei_left = 0;
	size_t hei_right = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		hei_left = 1 + binary_tree_balance(tree->left);
	}
	if (tree->right)
	{
		hei_right = 1 + binary_tree_balance(tree->right);
	}
	return (hei_left - hei_right);
}
