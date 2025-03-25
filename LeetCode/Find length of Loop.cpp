struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution {
public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node* head) {
        // Code here

        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                slow = head;

                // meeting point
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                // meeting point , slow == fast
                int len = 1;
                slow = slow->next;
                while (slow != fast) {
                    slow = slow->next;
                    len++;
                }
                return len;
            }

        }

        return 0;

    }
};
