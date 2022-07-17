#include <iostream>
using namespace std;

template<class T>

class number
{

private:
    T a;

public:
    number(T b):a(b){}

    T display()
    {
        return a;
    }
};
int main()
{

    number<int>obj(5);

    cout<<"Value stored by the object "<<obj.display()<<endl;

return 0;
}
