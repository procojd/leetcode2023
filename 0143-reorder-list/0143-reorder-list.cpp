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
    ListNode* reverse(ListNode* head){
        ListNode*curr=head,*prev=NULL,*next=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode*slow=head,*fast=head->next,*curr=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*head2=slow->next;
        slow->next=NULL;
        head2=reverse(head2);
        while(curr && head2){
            ListNode*next1,*next2;
            next1=curr->next;
            next2=head2->next;
            curr->next=head2;
            head2->next=next1;
            curr=next1;
            head2=next2;
        }
        
    }
};