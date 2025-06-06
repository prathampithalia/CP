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
        if (root == NULL) return;

        inorder(root->left, val);

        if (root->data > val) ans->data = min(ans->data, root->data);

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