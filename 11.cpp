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
    bool isPalindrome(ListNode* head) {
        int c=0,flag=0;
        ListNode*temp=head;
        while (temp!=NULL){
            c++;
            temp=temp->next;
        }
        ListNode*ptr2=head;
        for(int i=0;i<c/2;i++){
            ptr2=ptr2->next;
        }
        ListNode*prev=NULL;
        while(ptr2!=NULL){
            ListNode*next_node=ptr2->next;         //reverse the entire 2nds half
            ptr2->next=prev;
            prev=ptr2;
            ptr2=next_node;
        }
        ListNode*ptr1=head;
        temp=head;
        for(int i=0;i<c/2;i++){
            if(ptr1->val!=prev->val){
                return false;
            }
            ptr1=ptr1->next;
            prev=prev->next;
        }
        return true;
    }
};
