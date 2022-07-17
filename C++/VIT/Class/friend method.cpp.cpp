#include <iostream>
using namespace std;

class class1
{

    friend void func1(class1 &newobject,int n);

private:
    int num;

public:
    void display()
    {

        cout<<"Value of num: "<<num<<endl;
    }
};

void func1(class1 &newobject,int n)
{

    newobject.num= newobject.num+n;
}

int main()
{

    class1 obj;
    obj.display();
    func1(obj,4);
    obj.display();
}
