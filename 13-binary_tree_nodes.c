#include "binary_trees.h"
/**
 * binary_tree_nodes - calculate trees node with at least 1 child
 * @tree: Pointer to the root node of the tree to traverse
 *
 * Return: count nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	else
		return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right) + 1);
}
