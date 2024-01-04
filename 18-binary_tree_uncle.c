#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node to get uncle of
 * Return: pointer of uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *p, *grandp;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	p = node->parent;
	grandp = p->parent;
	if (grandp)
	{
		if (grandp->left == p)
			return (grandp->right);
		return (grandp->left);
	}
	return (NULL);
}
