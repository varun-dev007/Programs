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


int main()
{
    node* first=new node();
    node* second=new node();
    node* third=new node();

    first->value=1;
    first->next=second;
    second->value=2;
    second->next=third;
    third->value=3;
    third->next=NULL;

    display(first);
    return 0;
}
