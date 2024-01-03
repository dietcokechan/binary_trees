#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: node to start from
 * Return: height from node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft, hright;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	hleft = binary_tree_height(tree->left);
	hright = binary_tree_height(tree->right);

	if (hleft > hright)
		return (hleft + 1);
	return (hright + 1);
}
