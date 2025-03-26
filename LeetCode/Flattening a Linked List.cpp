/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
public:
    // Function which returns the  root of the flattened linked list.
    Node* flatten(Node* root) {
        // Your code here
        priority_queue<int, vector<int>, greater<int>> pq;

        Node* temp = root;
        while (temp != NULL) {
            pq.push(temp->data);
            Node* ch = temp->bottom;
            while (ch != NULL) {
                pq.push(ch->data);
                ch = ch->bottom;
            }
            temp = temp->next;
        }

        vector<int> v;
        while (!pq.empty()) {
            v.push_back(pq.top());
            pq.pop();
        }



        for (int i = 0; i < v.size(); i++)cout << v[i] << ' ';
        // return head;
    }
};

