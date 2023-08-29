#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 *         or if parent is NULL
 *
 * Behaviours: If parent already has a left-child, the new node must
 * take its place,and the old left-child must be set as the left-child
 * of the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		child_node->left = parent->left;
		parent->left->parent = child_node;
	}
	parent->left = child_node;

	return (child_node);

}
