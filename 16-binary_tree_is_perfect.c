#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Check whether binary trees is perfect
 * @tree: Pointer to the root node of the tree to traverse
 *
 * Return: on success 1, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int level = 0;

	level = binary_tree_height(tree);
	return ((size_t)_pow_recursion(2, level) - 1 == binary_tree_size(tree));
}

/**
 * _pow_recursion - number to the power
 * @x: Number to power
 * @y: number to indicate number times.
 *
 * Return: Number to the Power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (_pow_recursion(x, y - 1) * x);
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

	if (!tree)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}

/**
 *  binary_tree_size - calculate the size of the bt
 * @tree: Pointer  to the root node of the tree to traverse
 *
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
			1 + binary_tree_size(tree->right));
}
