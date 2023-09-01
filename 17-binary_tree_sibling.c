#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node
 *         if node is NULL or parent is NULL return NULL
 *         if node has no sibling return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling_node = NULL;

	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		sibling_node = node->parent->right;
	else
		sibling_node = node->parent->left;

	return (sibling_node);
}
