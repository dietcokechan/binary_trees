#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: parent of node
 * @value: new node
 * Return: pointer to new node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!(node))
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (!(parent->right))
		parent->right = node;
	else
	{
		parent->right->parent = node;
		node->right = parent->right;
		parent->right = node;
	}

	return (node);
}
