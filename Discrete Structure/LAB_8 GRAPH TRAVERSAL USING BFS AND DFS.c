
/*
Step 1: Define a structure for a binary tree node.
Step 2: Create a function to create a new binary tree node.
Step 3: Implement Depth-First Search (DFS) traversal for a binary tree (In-Order).
Step 4: Implement Breadth-First Search (BFS) traversal for a binary tree.
Step 5: Create a sample binary tree in the main function and demonstrate both traversals.
    */
// LAB 8: IMPLEMENT GRAPH TRAVERSAL USING BFS AND DFS

#include <stdio.h>
#include <stdlib.h>
// Define a structure for a binary tree node
struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};
// Create a new binary tree node
struct TreeNode *createNode(int data)
{
    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// Depth-First Search (DFS) traversal for a binary tree (In-Order)
void inOrderTraversal(struct TreeNode *root)
{
    if (root != NULL)
    {
        inOrderTraversal(root->left);
        printf("%d", root->data);
        inOrderTraversal(root->right);
    }
}
// Breadth-First Search (BFS) traversal for a binary tree
void breadthFirstTraversal(struct TreeNode *root)
{
    if (root == NULL)
        return;
    // Create a queue for BFS
    struct TreeNode *queue[100];
    int front = 0, rear = 0;
    // Enqueue the root node
    queue[rear++] = root;
    while (front < rear)
    {
        struct TreeNode *currentNode = queue[front++];
        printf("%d", currentNode->data);
        if (currentNode->left != NULL)
            queue[rear++] = currentNode->left;
        if (currentNode->right != NULL)
            queue[rear++] = currentNode->right;
    }
}
int main()
{
    // Create a sample binary tree
    struct TreeNode *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    printf("In-Order Traversal: ");
    inOrderTraversal(root);
    printf("\nBreadth-First Traversal: ");
    breadthFirstTraversal(root);
    return 0;
}
