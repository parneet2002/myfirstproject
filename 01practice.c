#include<stdio.h>
//area of square. 
int main()
{
int len, bre;

printf("Enter the length of the square: ");
scanf("%d", &len);
printf("Enter the breadth of the square: ");
scanf("%d", &bre);
int area=len*bre;
printf("%d",area);

return 0;

}