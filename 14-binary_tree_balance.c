#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: node to start from
 * Return: height from node
 */
size_t height(const binary_tree_t *tree)
{
	size_t hleft, hright;

	if (tree == NULL)
		return (0);
	hleft = height(tree->left);
	hright = height(tree->right);

	if (hleft > hright)
		return (hleft + 1);
	return (hright + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node of the tree
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftside, rightside, balance;

	if (tree == NULL)
		return (0);
	leftside = height(tree->left);
	rightside = height(tree->right);
	balance = leftside - rightside;
	return (balance);
}
