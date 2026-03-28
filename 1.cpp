#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){              //paramative constructor
        this->data=data;
        this->next=NULL;

    }
};
void traverse(node*head){           //traversal
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node * node1=new node(1);
    node * node2=new node(2);
    node1->next=node2;
    traverse(node1);
    return 0;
}
