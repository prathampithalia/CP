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

        head = reverseList(head);


        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        int maxVal = head->val;

        while (head) {
            if (head->val >= maxVal) {
                tail->next = head;
                tail = tail->next;
                maxVal = head->val;
            }
            head = head->next;
        }

        tail->next = NULL;


        return reverseList(dummy->next);
    }
};
