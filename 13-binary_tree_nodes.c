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
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: The number of nodes
 *
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree)
		return (0);

	if (!binary_tree_is_leaf(tree))
	{
		nodes = 1 + binary_tree_nodes(tree->left);
		nodes = nodes + binary_tree_nodes(tree->right);
		return (nodes);
	}

	return (0);
}
