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
    ListNode* deleteMiddle(ListNode* head) {
        int c=0;
        ListNode *temp=head;
        ListNode *new_node=NULL;
        ListNode *prev=NULL;
        if(head == NULL || head->next == NULL)
        return NULL;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        temp=head;
        for(int i=1;i<=c/2;i++){
            prev=temp;
            temp=temp->next;
            new_node=temp->next;
        }
        prev->next=new_node;
        return head;
    }
};
