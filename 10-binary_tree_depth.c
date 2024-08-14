#include "binary_trees.h"
/**
	* binary_tree_depth - function that measures the depth of a binary tree
	* @tree:const binary_tree_t
	* Return: depth of a binary
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (2);
	else if (tree->left != NULL && tree->right != NULL)
		return (0);
	return (1);
}
