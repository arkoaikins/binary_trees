#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 if tree is NULL,else return number of leaves in tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaves = 0;

	if (!tree)
		return (0);

	if (tree)
	{
		num_leaves += (!tree->left && !tree->right) ? 1 : 0;
		num_leaves += binary_tree_leaves(tree->left);
		num_leaves += binary_tree_leaves(tree->right);

	}
	return (num_leaves);
}
