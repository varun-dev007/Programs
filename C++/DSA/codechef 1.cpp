#include <iostream>
using namespace std;

int main()
{

    int T;
    cin>>T;

    while(T--)
    {
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {

            cin>>a[i];
        }

        for(int i=n-1;i>=0;i--)
        {

            if(a[i]!=0)
            {

                cout<<i<<endl;
            }


        }

    }
}
