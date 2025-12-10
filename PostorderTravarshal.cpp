#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode *left, *right;

    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
};

// Correct postorder helper
void postorder(vector<int>& ans, TreeNode *root){
    if (root == NULL) return;

    postorder(ans, root->left);
    postorder(ans, root->right);
    ans.push_back(root->data);
}

// Main postorder traversal function
vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> ans;
    postorder(ans, root);
    return ans;
}

int main() {

    /*
        Creating this tree:
                1
               / \
              2   3
             / \
            4   5

        Postorder = 4 5 2 3 1
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> result = postorderTraversal(root);

    cout << "Postorder Traversal: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
