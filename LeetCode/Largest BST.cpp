struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class NodeValue {
public:
    int maxValue, minValue, maxSize;

    NodeValue(int minNode, int maxNode, int maxSize) {
        this->minValue = minNode;
        this->maxValue = maxNode;
        this->maxSize = maxSize;
    }
};

class Solution {
public:
    NodeValue helper(Node* root) {

        if (!root) {
            return NodeValue(INT_MAX, INT_MIN, 0);
        }

        auto left = helper(root->left);
        auto right = helper(root->right);

        if (root->data > left.maxValue && root->data < right.minValue) {
            return NodeValue(min(left.minValue, root->data), max(right.maxValue, root->data), left.maxSize + right.maxSize + 1);
        }
        return NodeValue(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize));
    }
    int largestBst(Node* root) {

        return helper(root).maxSize;

    }
};