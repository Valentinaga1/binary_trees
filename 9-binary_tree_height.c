#include "binary_trees.h"
/**
 *  binary_tree_height - calculate the height of a parent
 * @tree: Pointer  to the root node of the tree to traverse
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}
