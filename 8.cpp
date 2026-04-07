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
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        int c=0;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<c/2;i++){
            temp=temp->next;
        }
        return temp;
    }
};

// | Approach           | Time | Space | Passes |
// | ------------------ | ---- | ----- | ------ |
// | Counting method    | O(n) | O(1)  | 2      |
// | Slow-Fast pointers | O(n) | O(1)  | 1 ⭐    |
