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
        
        ListNode* first, *second; 
        first=second=head;
        for(int i=1; i<=n; i++)
        {
            first=first->next;
        }
         if(first == NULL) 
        {
            ListNode* ans = head->next;
            delete head;
            return ans;
        }
        while(first->next!=NULL)
        {
            first=first->next;
            second=second->next;
        }
        //delete second->next; 
        second->next = second->next->next;
        return head;
    
    }    
    
};