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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(!head)
            return NULL;
        while(head!=NULL && head->val==val)
            head=head->next;
        ListNode *temp = head;
        ListNode *t=NULL;
        while(temp!=NULL){
            
            if(temp->val==val)
            {
                
                t->next=temp->next;
                temp=temp->next;
            }
            else{
                t=temp;
                temp=temp->next;
            }
        }
     return head;   
    }
};