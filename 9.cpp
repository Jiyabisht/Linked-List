/*

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {
        while(head1!=NULL && head2!=NULL){
            if(head1->data!=head2->data){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        if(head1==NULL && head2==NULL){      //if both head reaches null than it means they are equal otherwise one list is larger than the another
            return true;
        }
    }
};
