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
    void printLL(ListNode* T) {
        ListNode* temp = T;
        while (temp) {
            cout << temp->val << ' ';
            temp = temp->next;
        }
        cout << endl;
    }

    ListNode* partition(ListNode* head, int x) {

        if (head == NULL)return NULL;
        ListNode* less = nullptr;
        ListNode* Lhead = less;
        ListNode* greater = nullptr;
        ListNode* Ghead = greater;

        ListNode* temp = head;

        while (temp) {
            if (temp->val < x) {
                if (less == nullptr) {
                    less = temp;
                    Lhead = less;
                }
                else {
                    less->next = temp;
                    less = less->next;
                }
            }
            else {
                if (greater == nullptr) {
                    greater = temp;
                    Ghead = greater;
                }
                else {
                    greater->next = temp;
                    greater = greater->next;
                }
            }
            temp = temp->next;
        }
        if (greater != NULL) greater->next = NULL;

        if (Lhead) {
            less->next = Ghead;
        }
        else {
            return Ghead;
        }

        return Lhead;
    }
};