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

        if (head == NULL || head->next == NULL)
            return NULL;

        // unordered_map<ListNode* , int > mp ;

        // while( head->next != NULL ){
        //     if( mp[head] ) return head ;
        //     mp[head]++ ;
        //     head = head -> next ;

        // }

        // return NULL ;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                slow = head;
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }

        return NULL;
    }
};