#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: parent of node
 * @value: new node
 * Return: pointer to new node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!(node))
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (!(parent->left))
		parent->left = node;
	else
	{
		parent->left->parent = node;
		node->left = parent->left;
		parent->left = node;
	}

	return (node);
}
