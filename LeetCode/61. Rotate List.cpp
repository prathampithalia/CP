/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

void printList(ListNode* head) {
    while (head->next != NULL) {
        cout << head->val << "->";
        head = head->next;
    }
    cout << head->val << endl;
    return;
}
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int len = 0;
        ListNode* temp = head;
        if (head == NULL || head->next == NULL) return head;
        while (temp->next != NULL) {
            temp = temp->next;
            len++;
        }
        len++;
        k = k % len;
        int n = len - k;
        temp->next = head;

        while (n--) {
            temp = temp->next;
        }

        head = temp->next;
        temp->next = NULL;

        return head;

    }
};