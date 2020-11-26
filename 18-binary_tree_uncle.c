#include "binary_trees.h"
/**
 * binary_tree_uncle - find uncle of a node
 * @node: pointer to the node to find uncle
 * Return: A pointer to the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->right->left == node)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
