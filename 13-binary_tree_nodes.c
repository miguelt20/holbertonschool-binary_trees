#include "binary_trees.h"
/**
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: pointer to the root node
 *Return: void
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right != NULL)
		return (1 + binary_tree_nodes(tree->right));

	else if (tree->left != NULL && tree->right == NULL)
		return (1 + binary_tree_nodes(tree->left));

	else if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	else
		return (0);
}
