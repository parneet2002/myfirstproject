#include<stdio.h>
int display(int n, int arr[], int i)
{
    for(i=0;i<=n;i++)
    {
        printf("array at index %d",i+1);
        printf("  %d\n",arr[i]);
    }
}
int delete(int i,int arr[], int size, int element,  int index)
{
    for(i=index;i<=size;i++)
    {
        arr[i]=arr[i+1];
    }
    return 0;
}
int main()
{int i,size=5,element=6,index= 0;
    int arr[20] = {22,53,64,75,87,99};
    display(size, arr,i);
delete( i,arr, size, element, index);

printf("\n");
display(size, arr,i);
return 0;
}
