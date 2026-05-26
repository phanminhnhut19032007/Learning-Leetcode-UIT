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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL; 
        ListNode *tmp=head;
        
        ListNode *NEXT= head->next;
        while(tmp!=NULL && NEXT!=NULL)
        {
            if(tmp->val == NEXT->val)
            {
             NEXT=NEXT->next;
             continue;
            }
            else
            {
                tmp->next=NEXT;
                tmp=tmp->next;
                NEXT=NEXT->next;
            }
           
        }
        tmp->next=NULL;
        
            return head;
    }
};