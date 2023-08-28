# 0x1D. C - Binary trees

## Overview 
- Data structures and algorithm project to learn about Binary trees
- learning objectives include
   - What a binary tree is
   - The difference between a binary tree and a Binary Search Tree
   - The possible gain in terms of time complexity compared to linked lists
   - The depth,height,and size of a binary tree
   - The different transversal methods to go through a binary tree
   - complete,Full,perfect and balanced binary trees

### Data Structures
Data structures and types used for binary trees

- Basic Binary Tree
```bash
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
```

- Binary Search Tree
```bash
typedef struct binary_tree_s bst_t;
```

- AVL Tree
```bash
typedef struct binary_tree_s avl_t;
```

- Max Binary Heap
```bash
typedef struct binary_tree_s heap_t;
```

### Print function
- [This function](https://github.com/alx-tools/0x1C.c) was used for visualization 


