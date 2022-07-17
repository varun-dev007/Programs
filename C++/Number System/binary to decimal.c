#include <stdio.h>



int main()
{


    int n=0000000001;
    int sum=0;
    int base=1;

    while(n!=0)
    {

        int a=n%10;
        sum+=a*base;
        n/=10;
        base*=2;

    }
    printf("Binary to decimal = %d ",sum);
}
