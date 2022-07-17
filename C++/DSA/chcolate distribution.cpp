#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>a={3, 4, 1, 9, 56, 7, 9, 12};
    sort(a.begin(),a.end());

    int least=INT_MAX;
    int n=a.size();
    int z=4;

    for(int i=0;i<n-z;i++)
    {
        int b=a[i+z]-a[i];
        if(b<least)
        {
            least=b;
            cout<<a[i+z]<<" "<<a[i]<<endl;
        }

    }

    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }

    cout<<"\n"<<least<<endl;

    return 0;
}
