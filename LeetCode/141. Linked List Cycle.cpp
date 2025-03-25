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
    bool hasCycle(ListNode* head) {

        // ListNode* hd = head ;
        // if( (hd==NULL) || hd->next == NULL) return false;
        // unordered_map<ListNode*  , int> mp ;
        // while(hd->next != NULL ){
        //     if( mp.find(hd) != mp.end()) return true;

        //     mp[hd] = 1 ;
        //     hd = hd->next;    
        // }
        // return false ;


        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        return false;



    }
};