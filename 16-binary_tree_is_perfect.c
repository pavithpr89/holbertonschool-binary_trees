#include "binary_trees.h"

/**
 * tree_depth - Measures the depth of the leftmost path of a tree
 * @tree: Pointer to the root node
 *
 * Return: Depth of the tree
 */
size_t tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

while (tree)
{
depth++;
tree = tree->left;
}
return (depth);
}

/**
 * is_perfect - Checks if a binary tree is perfect recursively
 * @tree: Pointer to the current node
 * @depth: Expected depth of the tree
 * @level: Current level
 *
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
if (!tree)
return (1);

if (!tree->left && !tree->right)
return (depth == level + 1);

if (!tree->left || !tree->right)
return (0);

return (is_perfect(tree->left, depth, level + 1) &&
is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t depth;

if (!tree)
return (0);

depth = tree_depth(tree);
return (is_perfect(tree, depth, 0));
}
