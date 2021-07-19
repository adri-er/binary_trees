#ifndef BIN_TREES
#define BIN_TREES

/* ------------ LIBRARIES ----------------- */
#include <stdlib.h>


/* -------------- MACROS ------------------ */


/* ------------- STRUCTURES --------------- */

/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};


/* -------- TYPES DEFINITION -------------- */
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;


/* ------------ PROTOTYPES ---------------- */
/* ---- binary_print.c ---- */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s);
static size_t _height(const binary_tree_t *tree);
void binary_tree_print(const binary_tree_t *tree);


#endif /* BIN_TREES */