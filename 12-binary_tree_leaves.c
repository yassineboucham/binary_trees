#include "binary_trees.h"
/**
	* binary_tree_leaves - function that measures the leaves of a binary tree
	* @tree:const binary_tree_t
	* Return: leaves of a binary
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	return (l + r);
}
