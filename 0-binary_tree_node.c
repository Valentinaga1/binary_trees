#include "binary_trees.h"
/**
* binary_tree_node - Function that inserts a node as the left-child of another
* node.
* @parent: Pointer to the node to insert the left-child in
* @value: Value to store in the new node
* Return: The new node.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}