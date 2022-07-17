#include <iostream>
using namespace std;

//Unary operator

class parent
{
private:
    int value;

public:
    parent():value(5){}//Initializes value to 5

    void operator ++(){value++;}//Can use ++value

    void operator ++(int){value++;}//Can use value++

    void display()
    {
        cout<<value<<endl;
    }
};


int main()
{

    parent child;
    ++child;
    child++;

    child.display();
}
