#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the node to measure the size
 * Return: The size of the tree
 *
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l, size_r;

	if (!tree)
		return (0);

	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);

	return (size_l + size_r + 1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if is full or 0 otherwise
 *
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full;

	if (!tree)
		return (0);

	full = binary_tree_size(tree) % 2;

	return (full);
}
