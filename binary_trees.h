#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child
 * @right: Pointer to the right child
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

/* Function prototypes */
int binary_tree_is_perfect(const binary_tree_t *tree);
size_t tree_depth(const binary_tree_t *tree);
int is_perfect(const binary_tree_t *tree, size_t depth, size_t level);

#endif /* BINARY_TREES_H */
