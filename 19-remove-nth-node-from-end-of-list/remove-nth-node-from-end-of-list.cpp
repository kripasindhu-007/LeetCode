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
        if(head->next==NULL) return NULL;
        ListNode* temp=head;
        int count=0;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        ListNode* temp1=head;
        ListNode* next1=head;
        ListNode* prev=head;
        for(int i=0;i<count-n+1;i++){
            temp1=temp1->next;
            next1=next1->next;
        }
        for(int i=0;i<count-n;i++){
            prev=prev->next;
            
        }
        if(temp1->next==NULL){
            prev->next=NULL;
            return head;
            
        }
        next1=next1->next;
        if(next1==NULL){
            temp1->next=NULL;
            return head;
        }
        
        temp1->val=next1->val;
        temp1->next=next1->next;
        return head;
        
    }
};