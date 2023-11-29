#include<stdio.h>
void swap(int *a, int *b);
int main()
{ int a=13,b=79;
    printf("value of x and y is %d ,%d\n",a,b);
    swap(&a,&b);
    printf("value after swapiing %d %d",a,b);

}
void swap(int *a, int *b)
{int temp;
    temp =*a; //  passes the actual value of variabe
    *a = *b;
    *b = temp;
}