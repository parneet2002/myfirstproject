#include<stdio.h>
int main()
{
    int i=20;
    int *j= &i; //j will store the address of i
    int **k=&j; //k is pointer to pointer(store address of pointer)
    printf("Value of j is %d\n",*j);
    printf("value of i is %d\n",i);
    printf("address of j is %u\n",j);
    printf("address of i is %u\n",&i);
printf("value of k %d \n", **k);
printf("address of k %u",k);
    return 0;
}