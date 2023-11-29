#include<stdio.h>
int display(int n, int arr[], int i)
{
    for(i=0;i<=n;i++)
    {
        printf("array at index %d",i+1);
        printf("  %d\n",arr[i]);
    }
}
int insert(int i,int arr[], int size, int element,  int index)
{
    for(i=size;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }arr[index]=element;
    return 0;
}
int main()
{int i,size=5,element=6,index= 1;
    int arr[20] = {22,53,64,75,87};
    display(size, arr,i);
insert( i,arr, size, element, index);
size += 1; // increase the size of array theerfore size increased to 6
printf("\n");
display(size, arr,i);
return 0;
}
