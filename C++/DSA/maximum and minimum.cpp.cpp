//Getting minimum and maximum element in an array

#include<bits/stdc++.h>
using namespace std;

typedef struct
{

    int min;
    int max;

}pin;

pin func(int arr[],int l,int r)
{
    pin go;
    go.min=arr[0];
    go.max=arr[0];

    for(int i=l+1;i<=r;i++)
    {
        if(go.max<arr[i])
        {

            go.max=arr[i];
        }

        if(go.min>arr[i])
        {
            go.min=arr[i];
        }


    }


    return go;


}


int main()
{
    pin point;

    int arr[]={5,3,2,6,8};
    int left=0;
    int right=5-1;
    point=func(arr,left,right);
    cout<<"The minimum function ="<<point.min<<endl;
    cout<<"The maximum function ="<<point.max<<endl;

    return 0;
}

