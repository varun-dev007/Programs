
//static member function

#include<iostream>
using namespace std;
class sam
{
	private:
		 static int next;//static data member
	public:
	     static int gen()	//static member function
		 {
		 	cout<<"\n next id="<<next++;
		  }
};
int sam::next=1;
int main()
{
	for(int i=0;i<5;i++)

	{
		sam::gen();
	}
}
