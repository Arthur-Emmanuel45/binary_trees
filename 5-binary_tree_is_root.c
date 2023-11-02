#include "binary_trees.h"
/**
 * binary_tree_is_root - a function that checks if a given node is a root
 * @node: is a pointer to the node to check
 * Return:  if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->left && !node->right ? 1 : 0);
}
