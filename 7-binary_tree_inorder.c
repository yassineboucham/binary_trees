#include "binary_trees.h"
/**
	* binary_tree_inorder - through a binary tree using in-order traversal
	* @tree: binary_tree_t
	* @func: point to function
	* Return: 1 if node is a root, otherwise 0
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
