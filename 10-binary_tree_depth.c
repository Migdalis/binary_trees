#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: Pointer to the node to check
 * Return: 1 if node is a root, otherwise 0
 *
 **/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
		if (!node->parent)
			return (1);
	return (0);
}

/**
 * binary_tree_depth - Measures the depth of a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: The depth of the node
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || binary_tree_is_root(tree))
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
