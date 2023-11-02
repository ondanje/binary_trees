#include "binary_trees.h"

/**
 * binary_tree_height -function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 *
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight;
	size_t rheight;

	if (tree == NULL || (tree->left ==  NULL && tree->right == NULL))
	{
		return (0);
	}
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
	{
		return (lheight + 1);
	}
	else
	{
		return (rheight + 1);
	}
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
