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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0)
            return NULL;
        // vector<int> v;
        // cout << lists.size();
        // for (auto i : lists) {
        //         ListNode* t = i;
        //     if (t != NULL) {
        //             while (t != NULL) {
        //             v.push_back(t->val);
        //             t = t->next;
        //         }
        //     }
        // }
        // if( v.size() == 0) return NULL ;
        // sort(v.begin(), v.end());

        // ListNode* head = new ListNode(v[0]);
        // ListNode* temp = head;

        // for (int i = 1; i < v.size(); i++) {
        //     ListNode* x = new ListNode(v[i]);
        //     temp->next = x;
        //     temp = x;
        // }
        priority_queue<int, vector<int>, greater<int>> pq;
        // cout << lists.size();
        for (auto i : lists) {
            ListNode* t = i;
            if (t != NULL) {
                while (t != NULL) {
                    pq.push(t->val);
                    t = t->next;
                }
            }
        }
        if (pq.size() == 0) return NULL;

        ListNode* head = new ListNode(pq.top());
        pq.pop();
        ListNode* temp = head;

        while (!pq.empty()) {
            ListNode* x = new ListNode(pq.top());
            temp->next = x;
            temp = x;
            pq.pop();
        }


        return head;
    }
};