#include <iostream>
using namespace std;

class solution
{

 bool sol(string s)
    {

        if(s.length()==1) return true;

        int start=0,last=s.length()-1;

        while(start<last)
        {
            while(start<last && !isalnum(s[start]))start++;
            while(start<last && !isalnum(s[start]))last--;

            if(start<last && tolower(s[start])!=tolower(s[last])) return false;

            start++;
            last--;
        }

        return true;

    }

};


int main()
{

    solution obj;
    obj.sol("palap");

    return 0;
}
