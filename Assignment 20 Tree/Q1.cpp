#include <iostream>
#include <climits>

using namespace std;

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

int findMaxSubtreeSum(TreeNode* root, int& maxSum, TreeNode*& maxRoot) {
    if (root == nullptr) {
        return 0;
    }

    int leftSum = findMaxSubtreeSum(root->left, maxSum, maxRoot);
    int rightSum = findMaxSubtreeSum(root->right, maxSum, maxRoot);

    int currentSum = leftSum + rightSum + root->value;

    if (currentSum > maxSum) {
        maxSum = currentSum;
        maxRoot = root;
    }

    return currentSum;
}

int findMaxSubtreeSum(TreeNode* root) {
    int maxSum = INT_MIN;
    TreeNode* maxRoot = nullptr;
    findMaxSubtreeSum(root, maxSum, maxRoot);
    return maxSum;
}

int main() {
    // Construct the binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Find the subtree with the maximum sum
    int maxSubtreeSum = findMaxSubtreeSum(root);
    cout << "Maximum Subtree Sum: " << maxSubtreeSum << endl;

    return 0;
}
