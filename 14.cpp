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
        ListNode*temp=head;
        ListNode*new_node=new ListNode();
        ListNode*prev=NULL;
        if(head == NULL)
        return head;

        int c=0;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        if(c==n) return head->next;
        temp=head;
        int k=c-n;
        for(int i=1;i<=k;i++){
            prev=temp;
            temp=temp->next;
            new_node=temp->next;
        }
        prev->next=new_node;
        return head;
    }
};

/*
c = total number of nodes
n = node to remove from end
So if:
c == n
it means:
the node to remove is the first node
Example:
List:
1 -> 2 -> 3 -> 4 -> 5
Here:
c = 5
If:
n = 5
then remove the 5th node from the end.

Counting from end:
1st from end → 5
2nd from end → 4
3rd from end → 3
4th from end → 2
5th from end → 1
So first node must be deleted.

Therefore:
return head->next;
makes new head = 2.
*/
