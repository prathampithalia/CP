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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        while (head != NULL) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = reverseList(head);
        ListNode* cur = new ListNode(temp->val);
        ListNode* M = cur;
        int mx = temp->val;
        temp = temp->next;
        while (temp) {

            if (temp->val >= mx) {
                cur->next = new ListNode(temp->val);
                cur = cur->next;
                mx = temp->val;
            }
            temp = temp->next;
        }

        return reverseList(M);
    }

};
