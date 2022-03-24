#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 *
 **/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
		if (!node->left && !node->right)
			return (1);
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: The height of the tree
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);

	height_l = 1 + binary_tree_height(tree->left);
	height_r = 1 + binary_tree_height(tree->right);
	if (height_l >= height_r)
		return (height_l);

	return (height_r);
}
