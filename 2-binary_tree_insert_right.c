#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value:  value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or
 *         if parent is NULL
 *
 * Desc: If parent already has a right-child, the new node must take its place,
 *     and the old right-child must be set as the right-child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child_node;

	if (parent == NULL)
		return (NULL);
	child_node = malloc(sizeof(binary_tree_t));
	if (child_node == NULL)
		return (NULL);

	child_node->n = value;
	child_node->parent = parent;
	child_node->left = NULL;
	child_node->right = NULL;

	if (parent->right != NULL)
	{
		child_node->right = parent->right;
		parent->right->parent = child_node;
	}
	parent->right = child_node;

	return (child_node);

}
