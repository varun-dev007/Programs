#include <iostream>
using namespace std;

class Line
{

public:
    void setlength(double len);
    double getlength(void);
    Line();

private:
    double length;
};

Line::Line()
{
cout<<"Object is being created"<<endl;
}


void Line::setlength(double len)
{
length=len;
}

double Line:: getlength(void)
{
return length;
}


int main()
{
Line line;

line.setlength(6.0);
cout<<line.getlength()<<endl;

return 0;
}
