#include <iostream>
using namespace std;

//Unary operation all ways

class parent
{
private:
    int value;

public:
    parent():value(0){}

    parent operator ++()
    {
        parent obj;
        obj.value=value+1;

        return obj;
    }

     void operator ++(int)
    {
        value+=1;
    }

    void display()
    {
        cout<<value<<endl;
    }

};

int main()
{
    parent child1,child2;
    child1=++child2;
    child1.display();

    child1++;
    child1.display();

    return 0;
}
