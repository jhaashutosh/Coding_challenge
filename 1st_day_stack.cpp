// Implement change operation in stack using linked list.

#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head=NULL;

void push(int value)
{
    node* temp= new node();
    temp->data=value;

    if(head==NULL)  temp->next=NULL;
    else temp->next=head;
    head=temp;
}

int pop()
{
    if(head==NULL) cout<<"Underflow!!!<<endl";
    else{
        node* temp=new node();
        temp=head;
        int val=temp->data;
        head=head->next;
        free(temp);
        return val;
    }
 
}
node* peek()
{
    return head;
}

void change(int index)
{
    node duplicate;
}


int main()
{

}