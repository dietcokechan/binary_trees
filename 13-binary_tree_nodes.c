#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: root node of the tree
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftn, rightn, count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		count++;
	leftn = binary_tree_nodes(tree->left);
	rightn = binary_tree_nodes(tree->right);
	count += (leftn + rightn);
	return (count);
}
