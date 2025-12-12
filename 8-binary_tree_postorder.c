#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to a function to call for each node. The node’s value is
 *        passed as a parameter to this function
 *
 * Description: Post-order traversal visits the left subtree first,
 * then the right subtree, then the node itself. If tree or func is NULL,
 * the function does nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
