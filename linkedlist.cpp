#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};

void insertend(node* &head ,int value){
    node* newnode = new node;
    newnode->data = value;
    newnode->next = NULL;

    if(head == NULL){
        head = newnode;
        return ;
    }
    else{
        node* temp = head;
        while(temp->next!= NULL){
           temp =  temp ->next;
        }
        temp->next  = newnode;
    }

}

void display(node* head ){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL";
}

int main(){

    node* head = NULL;
    int n;
     int v;
    cout<<"enter the no of node : ";
    cin>>n;
    for(int i = 0 ;i<n;i++){
        cout<<"enter the value of node";
       
        cin>>v;
        insertend(head,v);
    }
 display(head);

  return 0 ;

}