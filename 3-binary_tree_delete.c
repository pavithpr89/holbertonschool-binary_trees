#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * If tree is NULL, does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
return;

/* Recursively delete left and right subtrees */
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

/* Free current node */
free(tree);
}
