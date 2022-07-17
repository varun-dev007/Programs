#include <stdio.h>

int main()
{

    int n=1000;


    int k,mask;long sum=0;
    for(int i=15;i>=0;i--)
    {

        mask=1<<i;
        k=n&mask;

        if(k==0)
        {
            sum=sum*10;
        }
        else
        {
            sum=sum*10+1;
        }
        printf("Decimal to Binary of %lld = %d\n",n,sum);
    }


}
