//Add 1 to odd and subtract 1 to even
//Indirect recursion

#include <stdio.h>

int n=1;


void odd()
{
    if(n<=10)
    {
        printf("%d ",n+1);
        n++;
        even();
    }
}

void even()
{

    if(n<=10)
    {

        printf("%d ",n-1);
        n++;
        odd();
    }
}
int main()
{
    odd();
}
