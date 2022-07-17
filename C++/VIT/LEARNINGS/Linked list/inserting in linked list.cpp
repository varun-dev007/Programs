#include <iostream>

using namespace std;

class node
{
public:
    int value;
    node* next;
};

void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->value<<endl;
        head=head->next;
    }
}

void insertAtFirst(node**head,int value)
{
    node* begin=new node();
    begin->value=value;
    begin->next=*head;

    *head=begin;

}

void insertAtEnd(node**head,int value)
{
    node* last=new node();
    last->value=value;
    last->next=NULL;

    if(*head==NULL)
    {
        cout<<"Error 430"<<endl;
        *head=last;
        return;
    }

    node* move=*head;

    while(move->next!=NULL)
    //For we want to reach last but one index
    {
        move=move->next;
    }

    move->next=last;
}

void insertAt(int value,node* first)
{
    node* second=new node();

    second->value=value;
    second->next=first->next;

    first->next=second;

}

int main()
{
    node* head=new node();
    node* second=new node();
    node* third=new node();

    head->value=1;
    head->next=second;
    second->value=3;
    second->next=third;
    third->value=5;
    third->next=NULL;

    display(head);


    insertAtFirst(&head,-1);
    cout<<"\n"<<endl;
    display(head);

    insertAtEnd(&head,7);
    cout<<"\n"<<endl;
    display(head);

    insertAt(4,second);
    cout<<"\n"<<endl;
    display(head);

    return 0;
}
