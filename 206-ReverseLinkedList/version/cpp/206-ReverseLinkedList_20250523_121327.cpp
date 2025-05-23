// Last updated: 23/05/2025, 12:13:27
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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev= NULL;
        ListNode* current= head;

        while(current != NULL){
            ListNode* new_n= current->next;
            current->next= prev;
            prev= current;
            current = new_n;
        }
        return prev;

        
    }
};