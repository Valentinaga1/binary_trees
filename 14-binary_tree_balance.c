#include "binary_trees.h"
/**
 * binary_tree_balance - AVL trees
 * @tree: Pointer to the root node of the tree to traverse
 *
 * Return: count nodes
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (!tree)
	{
		return (0);
	}
	lheight = binary_tree_height2(tree->left);
	rheight = binary_tree_height2(tree->right);
	return (lheight - rheight);
}
/**
 * binary_tree_height2 - calculate the height of a parent
 * @tree: Pointer  to the root node of the tree to traverse
 *
 * Return: height
 */
size_t binary_tree_height2(const binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (!tree)
		return (-1);
	if (!tree->left && !tree->right)
		return (0);
	lheight = binary_tree_height2(tree->left);
	rheight = binary_tree_height2(tree->right);
	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}
