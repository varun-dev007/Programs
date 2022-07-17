#include <bits/stdc++.h>
using namespace std;

int main()
{


    vector<int>ar={1,2,3,1,5};

    sort(ar.begin(),ar.end());

    for(int i=1;i<ar.size();i++)
    {
        if(ar[i]==ar[i-1])
        {

            cout<<1<<endl;
            return 0;
        }


    }

    cout<<0<<endl;
    return 0;
}


