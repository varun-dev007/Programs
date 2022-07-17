#include <iostream>
#include <list>

using namespace std;

void print(list<char>&lis)
{

    for(auto x:lis)
    {

        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{
    list<char>alpha1;

    char ch;

    for(int i=0;i<5;i++)
    {
        cin>>ch;
        alpha1.push_back(ch);
    }

    cout<<"List 1"<<endl;
    print(alpha1);

    list<char>alpha2;

    for(int i=0;i<5;i++)
    {
        cin>>ch;
        alpha2.push_back(ch);
    }
    print(alpha2);

    alpha1.merge(alpha2);
    print(alpha1);
    alpha1.sort();
    print(alpha1);
    alpha1.reverse();
    print(alpha1);

        return 0;
}
