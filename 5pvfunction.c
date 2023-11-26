#include<stdio.h>
//passing a value to a function 

int display(int a, int b);
int main()
{int c;
    c=display(2,9);
printf("%d",c);
}
int display(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}