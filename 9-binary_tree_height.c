#include "binary_trees.h"
/**
	* binary_tree_height - function that measures the height of a binary tree
	* @tree:const binary_tree_t
	* Return: height of a binary
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}
