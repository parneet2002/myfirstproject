#include <stdio.h>

int main()
{
    int i;
    int arr[10] = {1, 2, 4, 5, 6, 7, 8, 9, 0, 2};
    for (i = 0; i <= 9; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\nvalue at inder 6 is:\n");
    printf("\n%d", arr[6]);
    return 0;
}
