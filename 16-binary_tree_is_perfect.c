#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Check whether binary trees is perfect
 * @tree: Pointer to the root node of the tree to traverse
 *
 * Return: on success 1, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (!tree)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight == rheight)
		return (1);
	else
		return (0);
}

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
