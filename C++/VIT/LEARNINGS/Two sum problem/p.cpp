#include <iostream>
using namespace std;

int main()
{

    int  a[]={1,2,3,4,5};
    int last=4;

    for(int i=0;i<2;i++)
    {
        int temp=a[last];
        a[last]=a[i];
        a[i]=temp;

        last--;
    }

    for(int i=0;i<5;i++)
    {

        cout<<a[i]<<endl;
    }
}

