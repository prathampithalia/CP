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
    ListNode* sortList(ListNode* head) {
        priority_queue<int, vector<int>, greater<int>> pq;
        if (head == NULL || head->next == NULL)return head;
        ListNode* temp = head;
        while (temp != NULL) {
            pq.push(temp->val);
            temp = temp->next;
        }
        ListNode* newHead = new ListNode(pq.top());
        pq.pop();

        temp = newHead;
        while (!pq.empty()) {
            ListNode* x = new ListNode(pq.top());
            temp->next = x;
            temp = x;
            pq.pop();
        }
        return newHead;
    }
};