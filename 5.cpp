#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
};

void insert_at_begin(node *&head,int data){
    node*newnode=new node();
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}

void insert_at_end(node*&head,int data){
    node*newnode=new node();
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}

void delete_alternate(node*head){
    node*temp=head;
    node*delete_node=new node();
    while(temp!=NULL&&temp->next!=NULL  ){
        delete_node=temp->next;
        temp->next=delete_node->next;
        free(delete_node);
        temp=temp->next;
    }
}
int main(){
    node *head=NULL;
    insert_at_begin(head,1);
    insert_at_end(head,2);
    insert_at_end(head,3);
    insert_at_end(head,4);
    insert_at_end(head,5);
    insert_at_end(head,6);
    insert_at_end(head,7);
    insert_at_end(head,8);
    traverse(head);
    delete_alternate(head);
    traverse(head);
    return 0;
}
