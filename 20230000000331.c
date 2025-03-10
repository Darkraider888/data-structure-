#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function for in-order traversal
void inorderTraversal(struct Node* root) {
    if (root == NULL) return;

    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

// Function to insert a new node in the binary tree
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }

    return root;
}
// Function to search for a value in the BST
int search(struct Node* root, int value) {
    if (root == NULL) {
        return 0; // Value not found
    }
    if (root->data == value) {
        return 1; // Value found
    }
    if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

int main() {
    struct Node* root = NULL;
    int value;
    // Insert nodes into the binary tree
    root = insert(root, 35);
    insert(root, 50);
    insert(root, 40);
    insert(root, 25);
    insert(root, 30);
    insert(root, 60);
    insert(root, 78);
    insert(root, 20);
    insert(root, 28);
    // Perform in-order traversal
    printf("In-order traversal of the BST:\n");
    inorderTraversal(root);
    printf("\n");
    printf("\n");
    // Ask the user for a value to search
    printf("Enter a value to search in the BST: ");
    scanf("%d", &value);

    // Search for the value in the BST
    if (search(root, value)) {
        printf("Value %d found in the BST.\n", value);
    } else {
        printf("Value %d not found in the BST.\n", value);
    }

    return 0;
}

