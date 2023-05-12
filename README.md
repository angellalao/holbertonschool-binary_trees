# Binary Tree Functions

This project contains a collection of functions that can be used to work with binary trees.

## Data Structures

The following data structures and types are used for binary trees:

* **Basic Binary Tree**

```c
/**
 * struct binary_tree_s - Binary tree node
 *
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

typedef struct binary_tree_s binary_tree_t;
};
```
Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```
AVL Tree
```
typedef struct binary_tree_s avl_t;
```
Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```
Functions
The following functions are available in this project:

1. New node
function that inserts a node as the right-child of another node
```
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
```
2. Insert left
function that inserts a node as the left-child of another node
```
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
```
3. Insert right
 function that inserts a node as the right-child of another node
```
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
```
4. Delete
function that deletes an entire binary tree
```
void binary_tree_delete(binary_tree_t *tree);
```
5. Is leaf
function that checks if a node is a leaf
```
int binary_tree_is_leaf(const binary_tree_t *node);
```
6. Is root
function that checks if a given node is a root
```
int binary_tree_is_root(const binary_tree_t *node);
```
7. Pre-order traversal
function that goes through a binary tree using pre-order traversal
```
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
```
8. In-order traversal
function that goes through a binary tree using in-order traversal
```
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
```
9. Post-order traversal
function that goes through a binary tree using post-order traversal
```
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
```
10. Height
function that measures the height of a binary tree
```
size_t binary_tree_height(const binary_tree_t *tree);
```
11. Depth
function that measures the depth of a node in a binary tree
```
size_t binary_tree_depth(const binary_tree_t *tree);
```
12. Size
function that measures the size of a binary tree
```
size_t binary_tree_size(const binary_tree_t *tree);
```
13. Leaves
function that counts the leaves in a binary tree
```
size_t binary_tree_leaves(const binary_tree_t *tree);
```
14. Nodes
function that counts the nodes with at least 1 child in a binary tree
```
size_t binary_tree_nodes(const binary_tree_t *tree);
```
15. Balance factor
function that measures the balance factor of a binary tree
```
int binary_tree_balance(const binary_tree_t *tree);
```
16. Is full
function that checks if a binary tree is full
```
int binary_tree_is_full(const binary_tree_t *tree);
```
17. Is perfect
function that checks if a binary tree is perfect
```
int binary_tree_is_perfect(const binary_tree_t *tree);
```
18. Sibling
function that finds the sibling of a node
```
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
```
19. Uncle
function that finds the uncle of a node
```
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
```

## Contributors

* Sourabh
* Angella

## License

This project is licensed under the MIT License.














