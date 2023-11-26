#include <stdio.h>
void main()
{
    int j, i;
    for (j = 5; j >=1 ; j--)
    {
        for (i = 5; i >= j; i--)
        {
            printf(" %d ", i);
        }
        printf("\n");
    }

}