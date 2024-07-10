#include <stdio.h>

long fact(int);

void main ()
{
 long a=15, factorial;
  	factorial=fact(a);
    printf("Factorial of the num(%ld) = %ld\n",a,factorial);
}

long fact(int a)
{
    long i,f=1;
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
