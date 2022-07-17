#include <iostream>
using namespace std;

//Base class
class VIT_Student
{

protected:
    int DA_marks;
    int project_marks;

public:
    void setDAMarks(int pm)
    {
        DA_marks=pm;
    }
    void setProjectMarks(int pm)
    {
        project_marks=pm;
    }
};


//Derived class
class CSEStudent: public VIT_Student
{

public:
    int getMarks()
    {
        return
        (DA_marks+project_marks);
    }
};

int main()
{

    CSEStudent Ram;
    Ram.setDAMarks(25);
    Ram.setProjectMarks(98);
    cout<<"Total Marks: "<<Ram.getMarks()<<" out of 130"<<endl;

    return 0;
}
