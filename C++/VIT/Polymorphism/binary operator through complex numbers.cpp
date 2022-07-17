#include <iostream>
using namespace std;


class parent
{
private:
    int real;
    int imag;

public:
    parent(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }

    parent operator +(const parent& obj)
    {
        parent obj1;

        obj1.real=real+obj.real;
        obj1.imag=imag+obj.imag;

        return obj1;
    }

    void output()
    {
        cout<<"The complex number is = "<<real<<" + i"<<imag<<endl;
    }


};

int main()
{

    parent obj1(3,4),obj2(5,6);

    parent obj3=obj1+obj2;

    obj3.output();

    return 0;
}
