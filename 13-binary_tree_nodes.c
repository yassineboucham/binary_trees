#include "binary_trees.h"
/**
	* binary_tree_nodes - function that measures the nodes of a binary tree
	* @tree:const binary_tree_t
	* Return: nodes of a binary
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t has_child = (tree->left != NULL || tree->right != NULL) ? 1 : 0;
	size_t left_nodes = binary_tree_nodes(tree->left);
	size_t right_nodes = binary_tree_nodes(tree->right);

	return (has_child + left_nodes + right_nodes);
}
