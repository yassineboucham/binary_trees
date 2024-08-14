#include "binary_trees.h"
/**
	* binary_tree_size - function that measures the size of a binary tree
	* @tree:const binary_tree_t
	* Return: size of a binary
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t conter = 0;

	if (tree == NULL)
	{
		return (0);
	}
	conter = binary_tree_size(tree->left);
	return (conter + 1);
	conter = binary_tree_size(tree->right);
}
