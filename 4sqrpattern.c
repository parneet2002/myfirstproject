#include <stdio.h>
void main()
{
    int j, i;
    for (j = 0; j <= 5; j++)
    {
        for (i = 1; i <= 5; i++)
        if(j==0||j==5||i==2||i==5)
        {
            printf("*", i);
        }
        else
        {
            printf(" ");
        }
        printf("\n");
    }

}