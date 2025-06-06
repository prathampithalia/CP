/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {


        string s = "";
        if (root == NULL) return s;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* cur = q.front();
            q.pop();
            if (cur == nullptr) {
                s += "#,";
            }
            else {
                s += to_string(cur->val) + ',';
                q.push(cur->left);
                q.push(cur->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.size() == 0) return NULL;

        stringstream s(data);
        string str;
        getline(s, str, ',');
        TreeNode* root = new TreeNode(stoi(str));
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            TreeNode* cur = q.front();
            q.pop();

            getline(s, str, ',');
            if (str == "#") {
                cur->left = NULL;
            }
            else {
                TreeNode* leftNode = new TreeNode(stoi(str));
                cur->left = leftNode;
                q.push(leftNode);
            }

            getline(s, str, ',');
            if (str == "#") cur->right = NULL;
            else {
                TreeNode* rightNode = new TreeNode(stoi(str));
                cur->right = rightNode;
                q.push(rightNode);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));