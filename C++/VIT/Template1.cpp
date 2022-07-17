#include <iostream>
using namespace std;

template<typename T>

T findmax(T a,T b)
{

    return (a>b)?a:b;
}

int main()
{
    //Similarly the function overloading can be done without any worries
    cout<<findmax<int>(3,2)<<endl;
    cout<<findmax<char>('a','b')<<endl;


return 0;
}
