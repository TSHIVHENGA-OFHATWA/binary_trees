#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* If the node has no children */
	if (!tree->left && !tree->right)
		return (1);

	/* If the node has only one child or more than two children */
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);
	/* Recursively check the left and right subtrees */
	return (
		    binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right)
		    );
}
