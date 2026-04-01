void find_length(node*head){
    node*temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    cout<<"length is "<<c;
}
