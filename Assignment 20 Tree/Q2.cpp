#include <iostream>
#include <queue>

using namespace std;

struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

TreeNode *constructBSTFromLevelOrder(int arr[], int size)
{
    if (size == 0)
    {
        return nullptr;
    }

    TreeNode *root = new TreeNode(arr[0]);
    queue<TreeNode *> nodeQueue;
    nodeQueue.push(root);

    int i = 1;
    while (i < size)
    {
        TreeNode *parent = nodeQueue.front();
        nodeQueue.pop();

        TreeNode *leftChild = nullptr;
        TreeNode *rightChild = nullptr;

        leftChild = new TreeNode(arr[i++]);
        nodeQueue.push(leftChild);

        if (i < size)
        {
            rightChild = new TreeNode(arr[i++]);
            nodeQueue.push(rightChild);
        }

        parent->left = leftChild;
        parent->right = rightChild;
    }

    return root;
}

void inorderTraversal(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->value << " ";
    inorderTraversal(root->right);
}

int main()
{
    int arr[] = {7, 4, 12, 3, 6, 8, 1, 5, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    TreeNode *root = constructBSTFromLevelOrder(arr, size);

    cout << "BST Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
