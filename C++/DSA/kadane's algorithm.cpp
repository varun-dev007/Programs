#include <bits/stdc++.h>
using namespace std;

/*Kadane's algorithm

https://medium.com/@rsinghal757/
kadanes-algorithm-dynamic-programming-how-and-why-does-it-work-3fd8849ed73d

The thing about dynamic programming is:
->Remember what happened before;
->And those who forget what happened has to repeat all again

The formula for kadane's algorithm is:

*****local maximum[i]=max(array[i],array[i]+local maximum[i-1])

*/

int main()
{

    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
    int n=arr.size();

    int local_max=0;
    long global_max=INT_MIN;

    for(int i=0;i<n;i++)
    {

        local_max=max(arr[i],arr[i]+local_max);
        if(local_max>global_max)
        {
            global_max=local_max;
        }
        cout<<"The maximum sum is ="<<global_max<<endl;
    }

    cout<<"The maximum sum is ="<<global_max<<endl;

    return 0;
}
