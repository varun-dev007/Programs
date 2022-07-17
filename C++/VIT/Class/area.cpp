
#include <iostream>
using namespace std;

class Area
{

private:
    int length;
    int breadth;

public:
    Area()
    {
        length=5;
        breadth=5;
    }

    void getlength()
    {
        cout<<"Enter length and breadth respectively: ";
        cin>>length>>breadth;
    }

    int areacal(){ return length*breadth; }

    void display(int temp)
    {

        cout<<"Area : "<<temp;
    }

};

int main()
{

    Area A1, A2;

    int temp;
    A1.getlength();
    temp=A1.areacal();

    A1.display(temp);

    cout<<endl<<"Default area when value is not taken from user"<<endl;
    temp=A2.areacal();
    A2.display(temp);
    return 0;
}
