/**
 * Question: Merge two sorted linked lists and return it as a new list. The new list should be made by splicing
 together the nodes of the first two lists. 
 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode dummy(INT_MIN);
        
        ListNode* newlink = &dummy;
        
        
        while(l1!=NULL && l2!=NULL)
        {
            if ( l1->val > l2->val )
            {
                (newlink)->next=l2;
                l2 = l2->next;
            }
            else
            {
                (newlink)->next = l1;
                l1 = l1->next;
            }
            newlink = (newlink)->next;            
        }
        
        while(l1!=NULL)
        {
            (newlink)->next=l1;
            l1 = l1->next;
            newlink = (newlink)->next;
        }
        
        while(l2!=NULL)
        {
            
            (newlink)->next=l2;
            l2 = l2->next;
            newlink = (newlink)->next;
        }
        
        return dummy.next;
    }
};