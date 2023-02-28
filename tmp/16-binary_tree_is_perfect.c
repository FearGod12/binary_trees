#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: being a pointer to the root node of the tree to check.
 * Return: 1 if perfect, or 0 if otherwise or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (1 && (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right)));
	return (0);
}
