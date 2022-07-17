#include <bits/stdc++.h>
using namespace std;

void binary(int a[],int left,int right,int n)
{

    int middle=(left+right)/2;
    if(a[middle]==n)
    {
        cout<<middle<<endl;

    }
    else if(n>a[middle])
    {
        binary(a,left,middle-1,n);

    }
    else
    {

         binary(a,middle,right,n);
    }


}

int main()
{

    int a[]={6,5,4,1,2,3};
    int len=sizeof(a)/sizeof(int);



    int l=0,r=len-1;int n=3;

    binary(a,l,r,n);


}
