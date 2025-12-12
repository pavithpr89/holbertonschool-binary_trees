#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

/* Basic Binary Tree Node Structure */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Binary Search Tree, AVL Tree, Max Binary Heap typedefs */
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* Function Prototypes */

/* Node creation */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Insert nodes */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Delete tree */
void binary_tree_delete(binary_tree_t *tree);

/* Node checks */
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);

/* Traversals */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Tree properties */
size_t binary_tree_height(const binary_tree_t *tree);

#endif /* BINARY_TREES_H */
