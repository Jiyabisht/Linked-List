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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*temp=head;
        int c=1;
        if(head == NULL || head->next == NULL)
        return head;
        while(temp->next!=NULL){
            temp=temp->next;
            c++;
        }    
        k=k%c;
        if(k == 0)
            return head;
        int a=c-k;
        temp->next=head;
        for(int i=1;i<a;i++){
            head=head->next;
        }
        temp=head->next;
        head->next=NULL;
    return temp;
    }
};
