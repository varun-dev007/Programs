#include <iostream>
using namespace std;

class store
{

    friend void func(store &newobject,int n);

private:
    int item;

public:
    store() : item(0) {};

    void display()
    {

        cout<<"Number of items : "<<item<<endl;
    }

};

void func(store &newobject,int n)
{

    cout<<"The number of items: "<<newobject.item+n<<endl;
}

int main()
{

    store s1,s2,s3;

    cout<<"Number of items in store 1"<<endl;
    s1.display();
    cout<<"Number of items in store 2"<<endl;
    s2.display();
    cout<<"Number of items in store 3"<<endl;
    s3.display();


    cout<<"\n\nNumber of items in store 2"<<endl;
    func(s2,6);
    cout<<"Number of items in store 3"<<endl;
    func(s3,9);



}


// Define a class called store,
// display the number of items in the first three stores using base class object
// display the number of items in the next two stores using friend function
