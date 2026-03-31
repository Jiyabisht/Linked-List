
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

void delete_from_begin(node*&head){
    if(head==NULL){
        cout<<"List Empty";
        return;
    }
    node*temp=head;
    head=head->next;
    free(temp);
}

void delete_from_end(node*&head){
    if(head==NULL){
        cout<<"List Empty";
        return;
    }
    node*sec_last=head;
    while(sec_last->next->next!=NULL){
        sec_last=sec_last->next;
    }
    node*last_node=sec_last->next;
    sec_last->next=NULL;
    free(last_node);
}

void delete_at_k(node*&head,int k){
    if(head==NULL){
        cout<<"List Empty";
        return;
    }
    node*prev=head;
    int c=1;
    while(c<(k-1)){
        prev=prev->next;
        c++;
    }
    node*ele_to_dlt=prev->next;
    prev->next=ele_to_dlt->next;
    free(ele_to_dlt);
}

void traverse(node*head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void update(node*head,int k,int value){
    int c=1;
    node*temp=new node();
    temp=head;
    while(c<k){
        temp=temp->next;
        c++;
    }
    temp->data=value;
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
    delete_from_begin(head);
    delete_from_end(head);
    traverse(head);
    delete_at_k(head,3);
    traverse(head);
    update(head,5,33);
    traverse(head);
    return 0;
}
