#include "binary_trees.h"

/**
 * binary_tree_height_b - Calculate the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The height of the tree.
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_b(tree->left);
	right_height = binary_tree_height_b(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Calculate the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_b(tree->left);
	right_height = binary_tree_height_b(tree->right);

	return (left_height - right_height);
}
