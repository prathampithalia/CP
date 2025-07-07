/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL) {
            return NULL;
        }
        queue<Node*> q;
        Node* temp = root;
        q.push(temp);

        while (!q.empty()) {
            int size = q.size();
            vector<Node*> seq;
            for (int i = 0; i < size; i++) {
                Node* at = q.front();
                q.pop();
                if (at->left) {
                    q.push(at->left);
                    seq.push_back(at->left);
                };
                if (at->right) {
                    q.push(at->right);
                    seq.push_back(at->right);
                };
            }
            for (auto i : seq)
                cout << i->val << ' ';
            for (int i = 0; i < seq.size(); i++) {
                if (i == seq.size() - 1) {
                    seq[i]->next = NULL;
                }
                else {
                    seq[i]->next = seq[i + 1];
                }
            }
        }

        return temp;
    }
};