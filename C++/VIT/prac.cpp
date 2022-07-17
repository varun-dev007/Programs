
#include <iostream>
using namespace std;
class Student
{
public:
int age;
string name;
Student(int age, string name)
{
this->age = age;
this->name = name;
}
};
template<class Type>
void display(Type &obj)
{
cout<<"Name is: "<<obj.name<<endl;
cout<<"Age is: "<<obj.age<<endl;
}
int main()
{
Student s(25, "suresh");
display(s);
return 0;
}
