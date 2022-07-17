
//dynamic memory allocation

#include<iostream>
using namespace std;
class array
{
	private:
		 int *arr;
		 int n;
	public:

	    int s;

       void add(int);
	   array()
	   {
	   	 n=0;
		}
		array(int);
		void showdata();

};
array::array(int num)
{
	n=num;
	arr=new int[n];//memory allocated for array dynamically
	cout<<"\n enter the elements:";
	for(int i=0;i<n;i++)
	  cin>>arr[i];
}
void array::showdata()
{
	for(int i=0;i<n;i++)
	cout<<" "<<arr[i];
}

void array::add(int s)
{
    n=s;
    arr=new int[1];
    cout<<"Enter the new elemnt"<<endl;
    cin>>arr[s];

}

int main()
{
	int size;
	cout<<"\n enter the size of the array:";
	cin>>size;
	array arr(size);
	arr.showdata();

	while(true)
    {

	cout<<"\n\nIf you want to enter more number, enter 1 else 0"<<endl;
	int a;cin>>a;

	if(a==1)
    {
        size++;
        arr.add(size);
        arr.showdata();


    }
    else
    {
        cout<<"Thank you"<<endl;
        break;
    }
    }

	return 0;
}
