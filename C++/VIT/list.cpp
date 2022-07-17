#include <iostream>
#include <map>
using namespace std;


int main()
{

    map<string,int>student;

   student["JAM"]=12;
   student["RAM"]=23;

//   One way to and data into map is
//   string name;
//   int mark;
//   student.insert(pair<string,int>(name,mark);

   for(auto x:student)
   {
       cout<<x.first<<" "<<x.second<<endl;
   }
    return 0;

//    Another way to print is
//    student
//    map<string,int>::iterator itr;
//
//    for(itr=student.begin();itr!=itr.end();itr++)
//    {
//        cout<<(*itr).first<<(*itr).second<<endl;
//    }
}


