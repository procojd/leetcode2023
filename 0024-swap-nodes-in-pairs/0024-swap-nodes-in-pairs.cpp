class Solution {
public:

ListNode* swapfn(ListNode* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    ListNode* curr=head;
    head=curr->next;
    ListNode* next=head->next;
    head->next=curr;
    curr->next=swapfn(next);
    return head;
}

ListNode* swapPairs(ListNode* head) {
    return swapfn(head);
}
};