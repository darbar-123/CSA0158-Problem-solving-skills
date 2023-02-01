#include<stdio.h>
int main()
{
int a=1;
int num;
printf("\n enter the max num value:");
scanf("%d",&num);
printf("the odd numbers in the list are");
while(a<=num)
{
printf("%d\t",a);
a=a+2;
}
}
