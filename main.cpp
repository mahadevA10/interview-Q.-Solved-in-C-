/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct node
{
    int data;
    node *link;
};

node *head = NULL;
  
void display(node *temp)
{
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
}

void newBeg(int d)
{
    node *temp = new node();
    temp->data = d;
    temp->link = head;
    head = temp;
}

void newEnd(int d)
{
    node *ptr = new node();
    ptr -> data = d;
    ptr ->link = NULL;
    if(head == NULL)
    {
        head = ptr;
    }
    else
    {
        node *temp = head;
        while(temp->link!=NULL)
        {
            temp = temp->link;
        }
        temp->link=ptr;
    }
    
}

void deletebeg()
{
    node *temp = head;
    if(head == NULL)
    {
        cout<<" no i can do because list is empty";
    }
    else
    {
        head = head->link;
        free(temp);
    }
}

void deleteend()
{
    node *pre,*cur;
    if(head==NULL)
    {
        cout<<"empty";
    }
    else
    {
        if(head->link==NULL)
        {
            cur = head;
            head = NULL;
            free(cur);
        }
        else
        {
            cur = head;
            while(cur->link == NULL)
            {
                pre = cur;
                cur = cur->link;
            }
            pre->link = NULL;
            free(NULL);
        }
    }
}


int main()
{
    
    node *m1 = new node();
    m1->data = 5;
    m1->link = NULL;
    head = m1;
    newBeg(30);
    newBeg(550);
    newEnd(20);
    anywhere(70,30);
    deletebeg();
    deleteend();
    display(head);
    return 0;
}
