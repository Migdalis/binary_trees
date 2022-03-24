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
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 * Return: The number of leaves
 *
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	leaves = binary_tree_leaves(tree->left);
	leaves = leaves + binary_tree_leaves(tree->right);

	return (leaves);
}
