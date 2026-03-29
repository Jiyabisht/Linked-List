// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;

//     node(int data){
//         this->data=data;
//         this->next=NULL;

//     }
// };
// void insert_at_beginning(node* &head, int data){
//     node* newnode=new node(data);
//     newnode->next=head;
//     head=newnode;
// }
// void insert_at_end(node*&head, int data){
//     node*newnode=new node(data);
//     if(head==NULL){
//         head=newnode;
//         return;
//     }
//     node*temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=newnode;
// }
// void ins_at_k(node* &head ,int data,int k){
//     node *prev=head;
//     int c=0;
//     node*newnode=new node(data);
//     while(c<(k-1)){
//         prev=prev->next;
//         c++;
//     }
//     newnode->next=prev->next;
//     prev->next=newnode;
// }
// void traverse(node*head){
//     node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main(){
//     node * node1=new node(1);
//     node * node2=new node(2);
//     node1->next=node2;
//     node *head=node1;
//     traverse(head);
//     cout<<endl;
//     insert_at_beginning(head,0);
//     insert_at_end(head,3);
//     insert_at_end(head,4);
//     insert_at_end(head,5);
//     insert_at_end(head,6);
//     traverse(head);
//     int k;
//     cout<<"enter k : ";
//     cin>>k;
//     ins_at_k(head,10,k);
//     traverse(head);
//     return 0;
// }


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
    return 0;
}
