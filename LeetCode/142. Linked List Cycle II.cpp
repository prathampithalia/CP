/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {

        if (head == NULL || head->next == NULL) return NULL;

        unordered_map<ListNode*, int > mp;

        while (head->next != NULL) {
            if (mp[head]) return head;
            mp[head]++;
            head = head->next;

        }

        return NULL;

    }
};