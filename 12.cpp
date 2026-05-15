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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*new_node=new ListNode;
         ListNode* temp = new_node;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                new_node->next=list1;
                list1=list1->next;
            }else{
                new_node->next=list2;
                list2=list2->next;
            }
            new_node=new_node->next;
        }
        if(list1 != NULL) {
            new_node->next = list1;
        } else {
            new_node->next = list2;
        }
        return temp->next;
    }
};
