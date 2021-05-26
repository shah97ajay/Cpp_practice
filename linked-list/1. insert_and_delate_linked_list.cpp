#include <bits/stdc++.h>
 
using namespace std;
 
struct Node{
    int num;
    Node *next;
};
 
struct Node *head=NULL;
 
void insertNode(int n){
    struct Node *newNode=new Node;
    newNode->num=n;
    newNode->next=head;
    head=newNode;
}
 
void display(){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    struct Node *temp=head;
    while(temp!=NULL){
        cout<<temp->num<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
 
void deleteItem(){
    if(head==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    cout<<head->num<<" is removed."<<endl;
    head=head->next;
}
int main(){
    
    insertNode(10);
    display();
    insertNode(20);
    display();
    insertNode(30);
    display();
    deleteItem();
    display();
    
    return 0;
}
