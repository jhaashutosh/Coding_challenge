//today i learnt inserting node at any position in node and i firstly tries it myself and made up my mind that i will not look for any
// solution and after 2 hrs i was able to find the correct logic for it. Great experience!!! Again getting back to coding..

//This below code is for deleting a node at any position. Task for 3rd day

#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head=NULL;

void insert(int val){
    node* temp=new node();
    temp->data=val;
    temp->next=head;
    head=temp;
}

void delete_node(int pos)
{
    node* temp=new node();
    node* temp1=NULL;
    temp=head;
    for(int i=0;i<pos;i++)
    {
        temp=temp->next;
    }
    temp1=temp->next;
    temp=temp->next->next;
    free(temp1);
}

void print()
{
    node* temp=new node();
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    

}

int main()
{
    int n,decide,pos;
    cout<<"how many nodes you want to insert: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"type in the value:  ";
        cin>>x;
        insert(x);
    }
    cout<<"do you want to delete a node???"<<endl;
    cout<<"type 1 for yes and 0 for no"<<endl;
    cin>>decide;
    if(decide==1)
    {
        cout<<"type in the position"<<endl;
        cin>>pos;
        delete_node(pos);
        print();
    }
    else{
        cout<<"this is your final linked list: "<<endl;
        print();
    }
}