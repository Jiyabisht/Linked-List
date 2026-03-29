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

void insert_at_k(node*&head,int data,int k){
    int c=1;
    node*newnode=new node();
    newnode->data=data;
    node*prev=head;
    while(c<(k-1)){
        prev=prev->next;
        c++;
    }
    if(prev==NULL){
        cout<<"invalid position";
        return;
    }
    newnode->next=prev->next;
    prev->next=newnode;
}

void traverse(node*head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
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
    int k;
    cout<<"enter k : ";
    cin>>k;
    insert_at_k(head,20,k);
    traverse(head);
    return 0;
}
