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

node* deletenth(node* head,int pos)
{
    node* temp2=head;
    if(pos==1)
    {
    head=temp2->next;
    free(temp2);
    }
    else
    for(int i=0;i<pos-2;i++)
    temp2=temp2->next;
    node* temp3=temp2->next;
    temp2->next=temp3->next;
    free(temp3);
}
int main()
{
    node * head=NULL;
    int n,x,i,pos;
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
    cout<<endl;
    cout<<"enter the position to delete : ";
    cin>>pos;
    deletenth(head,pos);
    temp=head;
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








