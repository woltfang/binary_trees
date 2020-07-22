#include "binary_trees.h"
/**
 * binary_tree_is_root - Function that checks if a given node is a root.
 * @node: Pointer to the node to check.
 * Return: Return 1 if node is a root, otherwise 0
 * or if node is NULL, return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}