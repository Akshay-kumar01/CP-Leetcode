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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        if(head==NULL||head->next==NULL)
            return NULL;
        int c=0;
        while(curr->next->next!=NULL)
        {
            curr=curr->next;
            c++;
        }
        if(n==1)
        {
            curr->next=NULL;
            return head;
        }
        curr=curr->next->next;
        c=c+2;
        // cout<<c;
        if(n==c)
        {
            ListNode* p1=head;
            ListNode* p2=head->next;
            p1->next=NULL;
            return p2;
        }
        ListNode* ptr1=head;
        ListNode* ptr2=head;
        for(int i=1;i<c-n;i++)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        ptr2=ptr2->next->next;
        ptr1->next=ptr2;
        return head;
    }
};