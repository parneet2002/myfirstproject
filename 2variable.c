#include <stdio.h>
int main()
{
    int a, b;
    float c = 8.3;
    char d = 'w';
int s=c+a;
        printf("Enter two numbers: ");
     scanf("%d %d", &a, &b); /*%d format specifer, & give address so 
     &a is address of a */
    printf("your entered no. are %d %d", a, b);
    printf("the value of c and d %f %c", c, d);
printf("sum of c and a is %f",s);
    return 0;
}
