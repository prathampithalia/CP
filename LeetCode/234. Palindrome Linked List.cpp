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
    bool isPalindrome(ListNode* head) {

        //  reverese Half Part
        ListNode* slow = head;
        ListNode* fast = head;

        if (fast->next == NULL)
            return true;
        if (fast->next->next == NULL) {
            if (fast->val == fast->next->val)
                return true;
            else
                return false;
        }

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // as slow as Head , reverse second half

        ListNode* prev = NULL;
        ListNode* temp = slow;

        while (temp != NULL) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        ListNode* secHalf = prev;
        ListNode* firstHalf = head;

        while (secHalf != NULL) {
            if (secHalf->val != firstHalf->val)
                return false;

            secHalf = secHalf->next;
            firstHalf = firstHalf->next;
        }

        return true;
    }
};