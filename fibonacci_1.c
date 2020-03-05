
#include<stdio.h>
int main(){
int n,p1=1,p2=0;
while(n<500){
    n=p1+p2;
    printf("%d ", p2);
    p2=p1;
    p1=n;
}
return 0;
}

