#include <bits/stdc++.h>
using namespace std;

/* two words must have same type
and number of characters
in each*/


int main()
{

    string s="tac";
    string t="cat";

  unordered_multiset<char> ss(begin(s),end(s));
        unordered_multiset<char> tt(begin(t),end(t));

        int c=ss == tt;

        cout<<c<<endl;

}

/*

1
2
3
4
5
6
7
8
9
10
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> ss;
        unordered_map<int, int> tt;
        for (auto &n: s) ss[n] ++;
        for (auto &n: t) tt[n] ++;
        return ss == tt;
    }
};
Or even simpler, we can store/count them using unordered_multiset:

1
2
3
4
5
6
7
8
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_multiset<char> ss(begin(s), end(s));
        unordered_multiset<char> tt(begin(t), end(t));
        return ss == tt;
    }
};
*/
