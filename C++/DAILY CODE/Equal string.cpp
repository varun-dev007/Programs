// https://www. codechef.com/submit/EQUALSTRING

#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    string s1,s2;

    cin>>n>>s1>>s2;

    vector<int>store(26,0);
  
    
    for(int i=0;i<n;i++)
    {
        if(s2[i]!=s1[i])
        {
            store[s2[i]-'a']=1;
        }
    }

int sum=accumulate(store.begin(),store.end(),0);
    cout<<sum<<endl;
}

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        solution();
    }
}