\/*The structure of Node

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
private:
    Node* ans;
public:

    void inorder(Node* root, int val) {
        if (!root) return;

        if (val < root->data) {
            inorder(root->left, val);
            ans->data = min(ans->data, root->data);  // Update the answer
        }

        inorder(root->right, val);
    }
    int inOrderSuccessor(Node* root, Node* x) {
        // Your code here
        ans = new Node(INT_MAX);
        inorder(root, x->data);
        if (ans->data == INT_MAX) return -1;
        return ans->data;
    }
};