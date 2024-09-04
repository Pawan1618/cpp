void delete_from_position(Node** head, int position){
    if(*head==nullptr){
        cout<<"nothing to delete";
       return; 
    }
    if(position==0){
        Node* temp=*head;
        *head=temp->next;
        delete temp;
        return;
    }
    Node* temp=*head;
    for(int i=0;i<position-1;i++){
        temp=temp->next;
    }
    Node* next=temp->next->next;
    delete temp->next;
    temp->next=next;
}