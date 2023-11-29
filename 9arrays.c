#include<stdio.h>

int main()
{
    int arr[20],i,j;
    printf("Enter the size of array ");
    scanf("%d",j);
    for(i=0; i<=j-1; i++)
    {
        printf("Enter element at index %d ",i+1);
        scanf("%d",&arr[i]);

    }
        return 0;
}
