#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: node
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sleft, sright;

	if (tree == NULL)
		return (0);
	sleft = binary_tree_size(tree->left);
	sright = binary_tree_size(tree->right);

	return (sleft + sright + 1);
}
