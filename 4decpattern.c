#include <stdio.h>
void main()
{
    int j, i;
    for (j = 1; j <= 4; j++)
    {
        for (i = 5; i >= 1; i--)
        {
            printf(" %d ", i);
        }
        printf("\n");
    }

}