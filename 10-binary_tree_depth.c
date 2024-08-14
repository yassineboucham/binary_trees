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
	size_t depth = 0;
	const binary_tree_t *current = tree;

	while (current->parent != NULL)
	{
		depth++;
		current = current->parent;
	}
	return (depth);
}
