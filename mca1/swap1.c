#include<stdio.h>

void main(){
    int a=89;
    int b=90;
    printf("a=%d and b=%d\n",a,b);
    b=(a+b)-(a=b);
     printf("a=%d and b=%d\n",a,b);
}