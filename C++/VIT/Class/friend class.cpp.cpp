
#include <iostream>
using namespace std;

class Car
{
friend class resalecar;

private:
    int key;

public:
    Car() : key(0){};
    void print()
    {
      cout<<"The password of the car : "<<key<<endl;
    }
};

class resalecar
{

public:
    void changevalue(Car &newclass,int n)
    {

        newclass.key=n;
    }
};

int main()
{
Car c1;
resalecar r1;

c1.print();
r1.changevalue(c1,10);
c1.print();


return 0;
}
