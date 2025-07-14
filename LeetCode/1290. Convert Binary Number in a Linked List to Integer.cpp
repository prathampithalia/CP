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
    int getDecimalValue(ListNode* head) {

        ListNode* temp = head;
        int i = 0;
        string s = "";
        while (temp) {
            s += to_string(temp->val);
            temp = temp->next;
            i++;
        }
        int n = 0;
        for (int j = 0; j < i; j++) {
            n += (s[i - j - 1] - '0') << j;
        }
        cout << s << endl;
        return n;

    }
};