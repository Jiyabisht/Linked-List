//Insert at the beginning
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;

    }
};
void insert_at_beginning(node* &head, int data){
    node* newnode=new node(data);
    newnode->next=head;
    head=newnode;
}
void traverse(node*head){
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
    node *head=node1;
    traverse(head);       //head=node1
    cout<<endl;
    insert_at_beginning(head,0);
    traverse(head);      //haed=newnode as head was updated in insertion function
    return 0;
}
