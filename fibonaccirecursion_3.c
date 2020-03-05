
#include<stdio.h>
int fib(int n){
if(n<2)
    return n;
return fib(n-1)+fib(n-2);
}

int main(){
int n=100;
fib(n);
printf("%d ",fib(n));
return 0;
}
