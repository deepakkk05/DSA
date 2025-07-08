
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;

    node(int n)
    {
        this->data = n;
        this->next = nullptr;
    }
};

node* insertnodeatEnd(node* head, int n)
{

    if(head == nullptr)
    { 
        node* Nnode = new node(n);
        return Nnode;
    }
    else
    {   
        node* temp = head;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        node* new_node = new node(n);
        temp->next = new_node;
        return head;
    }

    return head;
}


void display(node* head)
{
    node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}


int main() {
   
    node* head=nullptr;

    head = insertnodeatEnd(head,5);
    head = insertnodeatEnd(head,6);
    head= insertnodeatEnd(head,2);
    head = insertnodeatEnd(head,2);

    display(head);
    

return 0;
}

