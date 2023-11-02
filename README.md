# Binary Tree

This repository provides implementations and operations related to binary trees, including key concepts and various traversal methods.

## What is a Binary Tree?

A binary tree is a hierarchical data structure composed of nodes where each node has at most two children, referred to as the left child and the right child. The top node is known as the root node, and the nodes at the end without any children are called leaf nodes.

## Difference between a Binary Tree and a Binary Search Tree

A Binary Search Tree (BST) is a specific type of binary tree where the left child of a node contains a value lesser than the node's value, and the right child contains a value greater than the node's value. This property ensures efficient searching within the tree.

## Gain Compared to Linked Lists

Binary trees offer improved time complexity compared to linked lists for various operations like searching, insertion, and deletion, often achieving O(log n) time complexity for balanced trees. This efficiency is due to the hierarchical structure that allows for faster data retrieval.

## Concepts in Binary Trees

### Depth, Height, and Size

- **Depth:** The depth of a node is the number of edges from the root node to that specific node.
- **Height:** The height of a tree is the length of the longest path from the root node to a leaf node.
- **Size:** The size of a binary tree refers to the total number of nodes in the tree.

### Traversal Methods

Traversal methods to navigate a binary tree:
- **In-order:** Left, Root, Right (LNR)
- **Pre-order:** Root, Left, Right (NLR)
- **Post-order:** Left, Right, Root (LRN)
- **Level-order (Breadth-first):** Level by level from left to right

### Types of Binary Trees

- **Complete Binary Tree:** A binary tree where all levels are completely filled except possibly the last level, which is filled from left to right.
- **Full Binary Tree:** A binary tree in which every node has either 0 or 2 children.
- **Perfect Binary Tree:** A binary tree where all internal nodes have exactly two children, and all leaf nodes are at the same level.
- **Balanced Binary Tree:** A binary tree is considered balanced when the height of the left and right subtrees of every node differ by no more than one.

---

Feel free to explore the implementations and operations provided in this repository to better understand and work with binary trees.

