#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor (left subtree height - right subtree height)
 *         0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = (tree->left) ? binary_tree_height(tree->left) : 0;
right_height = (tree->right) ? binary_tree_height(tree->right) : 0;

return ((int)left_height - (int)right_height);
}
