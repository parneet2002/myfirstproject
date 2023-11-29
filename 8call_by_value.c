#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 2, b = 7;
    int c = a + b;
    printf("Sum of %d and %d is: %d\n", a, b, c);
    printf("the value of sum is %d", sum(a, b));
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    a = 10, b = 6; /*function can't change the value of main variable value unless you have pointers .
                     you can see here value of a and b are different.
                     so in call by value value is copied to the variable*/
    return c;
}
  