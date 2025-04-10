class Solution {
public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int ok = 1;

    void solve(Node* root) {
        if (root == NULL)return;

        if (!root->left && !root->right) {
            return;
        }

        if (root->left == NULL && root->right != NULL) {
            if (root->right->data != root->data)ok = 0;
        }

        else if (root->left != NULL && root->right == NULL) {
            if (root->left->data != root->data)ok = 0;
        }

        else {
            if ((root->right->data + root->left->data) != root->data)ok = 0;
        }

        solve(root->left);
        solve(root->right);

    }

    int isSumProperty(Node* root)
    {
        // Add your code here
        solve(root);
        return ok;
    }
};
