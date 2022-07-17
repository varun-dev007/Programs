/*Principle: For every item in the list
             there associates a pointer
             which points at next item in the lists
*/

#include <iostream>
using namespace std;

class link



int main()
{

    linklist obj;

    cout<<"Number of elements: "<<obj.count()<<endl;

    obj.append(11);
    obj.append(33);

    obj.addafter(11,22);
    obj.addatbeg(0);

    obj.display();

    obj.del(0);

    obj.display();

    return 0;

}
