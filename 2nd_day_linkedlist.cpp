// Linkedlist is majorly used when we are not known to the fact that how much data will be entered and is local memory allowing such big data for processing.
// I think we all agree to the fact that array is much more easier to code and understand as compared to linkedlist and you all must know that there are few things
// that are implemented just for programmer's ease of coding, for example stl library and recurssion, all these can be implemented directly but to reduce the time of
// of coding we are using these direct methods.

// Linkedlist has a lot of usage and we can modify it a little bit to make it much more effective.

// code for implementation of linkedlist
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head=NULL;
void insert(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=head;
    head=temp;
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
    cout<<endl;
}

int main()
{
    int n;
    cout<<"how many numbers you want to insert"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cout<<"type in the data: "<<endl;
        cin>>val;
        insert(val);
        cout<<"now linked list is modified to: "<<endl;
        print();
    }
}
