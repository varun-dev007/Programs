#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{


    vector<int>a={1,2,3,4,5,6,7,8,9,10};

    //lets rotate the last 2 elements
    int k=2;

    //reversing the entire string{10,9,8,7,6,5,4,3,2,1}
    reverse(a.begin(),a.end());

    //{9,10,8,7,6,5,4,3,2,1}
    reverse(a.begin(),a.begin()+k);

    //{9,10,1,2,3,4,5,6,7,8}
    reverse(a.begin()+k,a.end());

    for(auto x:a){cout<<x<<" ";}


    return 0;
}
