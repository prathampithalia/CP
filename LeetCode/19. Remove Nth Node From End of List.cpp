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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp = head;
        int len = 1;
        if (head == NULL || head->next == NULL)
            return NULL;

        while (temp->next != NULL) {
            temp = temp->next;
            len++;
        }

        len = len - n;
        if (len == 0) {
            head = head->next;
            return head;
        }

        temp = head;
        while (len) {
            temp = temp->next;
            len--;
        }

        if (temp->next != NULL) {
            temp->val = temp->next->val;
            temp->next = temp->next->next;
        }
        else {
            temp = head;

            while (temp->next->next != NULL) {
                temp = temp->next;
            }


            temp->next = nullptr;
        }
        return head;
    }
};