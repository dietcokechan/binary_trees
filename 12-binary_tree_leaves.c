#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: root node of tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafl, leafr;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	leafl = binary_tree_leaves(tree->left);
	leafr = binary_tree_leaves(tree->right);

	return (leafl + leafr);
}
