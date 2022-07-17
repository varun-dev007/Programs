#include <bits/stdc++.h>
using namespace std;


void reverse(int arr[],int left,int right)
{
    if(left>=right)
        return;

    int temp=arr[left];
    arr[left]=arr[right];
    arr[right]=temp;

    reverse(arr,left+1,right-1);


}

void printarray(int  arr[],int size)
{
    for(int i=0;i<size;i++ )
    {

        cout<<arr[i]<<" ";
    }

}

int main()
{

    int arr[]={1,2,3};
    int size=3;
    int left=0;
    int right=2;

    printarray(arr,size);
    cout<<"\nOriginal array"<<endl;
    reverse(arr,left,right);
    cout<<"Reversed array"<<endl;
    printarray(arr,size);

    return 0;
}
