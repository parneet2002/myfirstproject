#include <stdio.h>
//linear search is use for sorted as well as unsorted array.
//its complexicity is O(n) fair case
int linsearch(int i, int size, int arr[], int element)
{
    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
   
    
        return -1;
    
}
int main()
{
    int arr[10] = {1, 2, 32, 43, 44, 55, 67, 78, 98};
    int size = sizeof(arr) / sizeof(int); // use to calculate the size of array.
    int element = 43;
    int i;
    printf("the element %d is at index %d", element, linsearch(i, size, arr, element));
    return 0;
}
