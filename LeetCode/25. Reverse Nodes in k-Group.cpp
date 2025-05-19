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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        if (k == 1 || head == NULL) return head;

        vector<int> v;
        int len = 0;
        while (temp != NULL) {
            v.push_back(temp->val);
            len++;
            temp = temp->next;
        }

        for (int i = 0;i < len; i += k) {
            if (i + k <= len)
                reverse(v.begin() + i, v.begin() + i + k);
        }
        temp = new ListNode(v[0]);
        head = temp;
        for (int i = 1; i < len; i++) {
            ListNode* x = new ListNode(v[i]);
            temp->next = x;
            temp = x;
        }
        return head;
    }
};