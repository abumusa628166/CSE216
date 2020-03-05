
#include<stdio.h>
int i,f[100];

int fib(int n)
{
    if (n < 2)
        return f[n]=n;

    if (f[n]!=0)
        return f[n];

    return f[n]=fib(n-1) + fib(n-2);
}

int main ()
{
    int n=15,x;
    for(i=0; i<100; i++)
        f[i]=0;

    fib(n);
    for(i=0; i<n; i++)
    {
        printf("%d\t", f[i]);
    }

    return 0;
}
