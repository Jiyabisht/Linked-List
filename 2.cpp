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

//Insert at the end
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
void insert_at_end(node*&head, int data){
    node*newnode=new node(data);
    if(head==NULL){
        head=newnode;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){                 //moves the temp till it reaches last element then add newnode
        temp=temp->next;
    }
    temp->next=newnode;              //make changes in original linkedlist
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
    traverse(head);
    cout<<endl;
    insert_at_beginning(head,0);
    insert_at_end(head,3);
    traverse(head);
    return 0;
}


//insert at k
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
void insert_at_end(node*&head, int data){
    node*newnode=new node(data);
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
void ins_at_k(node* &head ,int data,int k){
    node *prev=head;
    int c=0;
    node*newnode=new node(data);
    while(c<(k-1)){
        prev=prev->next;
        c++;
    }
    newnode->next=prev->next;
    prev->next=newnode;
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
    traverse(head);
    cout<<endl;
    insert_at_beginning(head,0);
    insert_at_end(head,3);
    insert_at_end(head,4);
    insert_at_end(head,5);
    insert_at_end(head,6);
    traverse(head);
    int k;
    cout<<"enter k : ";
    cin>>k;
    ins_at_k(head,10,k);
    traverse(head);
    return 0;
}
