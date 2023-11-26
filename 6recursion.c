//recursion is a function that calls itself in its body
//it can be used to solve problems like factorial, Fibonacci series 
#include<stdio.h>
int factorial(int n);
int main()
{int a;
printf("enter your number \n");
scanf("%d",&a);
printf("factorial of %d =%d",a,factorial(a));
}
int factorial(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
    

}