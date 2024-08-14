# 🐿️ Binary Trees: The Squirrel's Guide to Data Structures 🌳

Welcome to the enchanted forest of binary trees! Here, we explore the wild world of data structures where nodes grow like acorns, and branches are as mysterious as the squirrel's secret stash.

## What on Earth is a Binary Tree? 🌲

A binary tree is a mystical data structure where each node can have up to two children, commonly referred to as the left child and the right child. Imagine a family tree where each parent has at most two kids, and you'll have a rough idea of what a binary tree looks like.

### Why Binary Trees? 🤔

Binary trees are like the Swiss Army knives of data structures. They're great for:

- **Searching**: Need to find a specific nut? Binary trees make it efficient.
- **Sorting**: Keeping your acorns in order has never been easier.
- **Storing Data**: Binary trees are ideal for hierarchical data representation.

## Project Structure 📁

Here's what you'll find in this forest of files:

- `binary_tree.h` - The header file with the structure and function prototypes.
- `binary_tree.c` - The source file where the magic happens (or at least where the trees grow).
- `main.c` - A simple driver program to demonstrate how to use our tree functions.
- `Makefile` - For the lazy squirrels, a Makefile to compile the code with ease.

## How to Grow Your Own Binary Tree 🌱

Are you ready to compile and run the code? Grab your GCC (Great Compiler of Code) and follow these steps:

### Step 1: Clone the Repository 🛒

First, fetch your acorns by cloning the repository:

```bash
git clone https://github.com/yourusername/binary-tree-squirrels.git
cd binary-tree-squirrels
```

### Step 2: Compile the Code 🏗️

To compile the code using GCC, run the following command:

```bash
gcc -o binary_tree main.c binary_tree.c
```

Or, if you're feeling fancy and want to use the Makefile:

```bash
make
```

### Step 3: Run the Code 🚀

Now it's time to see your tree in action! Run the compiled program like this:

```bash
./binary_tree
```

### Step 4: Sit Back and Enjoy the Forest 🌳

Watch as your binary tree sprouts and grows, performing its operations like a squirrel gathering nuts.

## Example Usage 🛠️

Here's a peek at what you can do with our binary tree functions:

```c
#include "binary_tree.h"

int main()
{
    binary_tree_t *root = new_node(1, NULL);
    root->left = new_node(2, root);
    root->right = new_node(3, root);
    root->left->left = new_node(4, root->left);
    root->left->right = new_node(5, root->left);

    printf("Height of the tree: %zu\n", binary_tree_height(root));
    printf("Depth of the node with value 4: %zu\n", binary_tree_depth(root->left->left));

    free_tree(root);
    return 0;
}
```

## Contributions and Bugs 🐛

If you find a bug or want to contribute, feel free to open an issue or a pull request. We're always looking for more squirrels to help gather nuts!

## License 📜

This project is licensed under the MIT License, so feel free to use, modify, and distribute the code. Just don't forget to share your acorns!

## Contact 📬

If you have any questions, feel free to reach out to us at squirrel@forestmail.com. Happy coding, and may your trees always be balanced! 🌲🐿️

---

This README provides a clear explanation of binary trees and instructions for compiling and running the code using GCC, all presented in a fun and engaging way.