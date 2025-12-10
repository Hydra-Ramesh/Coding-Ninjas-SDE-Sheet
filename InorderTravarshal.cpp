#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode *left, *right;
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
};

// Helper for inorder traversal
void inorder(TreeNode* root, vector<int>& ans) {
    if (root == NULL) return;

    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    inorder(root, ans);
    return ans;
}

int main() {

    /*
        Creating the following tree:
               1
              / \
             2   3
            / \
           4   5
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Get inorder traversal
    vector<int> result = getInOrderTraversal(root);

    // Print result
    cout << "Inorder Traversal: ";
    for (int x : result) cout << x << " ";

    return 0;
}
