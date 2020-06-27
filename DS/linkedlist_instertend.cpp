#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
node* insert(node *head,int x)
{
    node* temp=new node();
    node* current=new node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL){
    head=temp;
    }
    else
    {
    current->next=head;
    while(current->next!=NULL)
    {
    current=current->next;
    }
    current->next=temp;
        
    }
    
    return head;
}
int main()
{
    node * head=NULL;
    int n,x,i;
    cout<<"How many elements"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the"<<i<<"value :";
        cin>>x;
        head=insert(head,x);
        
    }
    node* temp=head;
    for (i=0;i<n;i++)
    {
        while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
        if(temp!=NULL)
        cout<<"->";
        else
        cout<<" ";
        }
        
    }
    
    
}








