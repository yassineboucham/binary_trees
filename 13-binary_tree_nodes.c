#include "binary_trees.h"
/**
	* binary_tree_nodes - function that measures the nodes of a binary tree
	* @tree:const binary_tree_t
	* Return: nodes of a binary
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t has_child;
	size_t left_nodes;
	size_t right_nodes;

	if (tree == NULL)
		return (0);

	has_child = (tree->left != NULL || tree->right != NULL) ? 1 : 0;
	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	return (has_child + left_nodes + right_nodes);
}
