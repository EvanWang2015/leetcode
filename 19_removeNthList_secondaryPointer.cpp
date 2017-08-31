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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        
        ListNode** first;
        first=&head; 
        ListNode* second = head;
        
        for(int i=1; i<n; i++)
        {
            second=second->next;
        }
        while(second->next!=NULL)
        {
            second=second->next;
            first = &((*first)->next);
        }
        
        *first=(*first)->next;
        return head;
    }    
    
};