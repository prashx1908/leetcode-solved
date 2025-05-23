// Last updated: 23/05/2025, 12:30:58
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a1 = headA;
        ListNode *a2 = headB;
        if(a1 ==NULL || a2==NULL)return NULL;
        while(a1 !=NULL && a2 !=NULL && a1 != a2){
            a1= a1->next;
            a2= a2->next;


   
        if(a1==a2) return a1;
        if(a1==NULL) a1= headB;
        if(a2==NULL) a2= headA;
        }
        return a1;
        
        
    }
};