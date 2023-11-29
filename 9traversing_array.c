#include<stdio.h>

int main()
{
    int i,j,n[20];
    printf("enter no. element to enter\n");
    scanf("%d",&i);
    for(int j=0;j<=i-1;j++)
{
    printf("element %d: ",j+1);
    scanf("%d",&n[j]);

}
        return 0;
}
