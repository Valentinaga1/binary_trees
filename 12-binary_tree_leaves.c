#include "binary_trees.h"
/**
 * binary_tree_leaves - calculate unique leaves nodes
 * @tree: Pointer  to the root node of the tree to traverse
 *
 * Return: leaves nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_leaves(tree->left) +
				binary_tree_leaves(tree->right));
}
