#include <stdio.h>
// binary search use for sorted arrays
//complexicity of binary search O(log n), best case
int bisearch(int i, int size, int arr[], int element)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {

        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }return -1;
}

int main()
{

    int arr[10] = {1, 2, 32, 43, 44, 55, 67, 78, 98};
    int size = sizeof(arr) / sizeof(int); // use to calculate the size of array.
    int element = 7;
    int i;
    printf("the element %d is at index %d", element, bisearch(i, size, arr, element));
    return 0;
}
