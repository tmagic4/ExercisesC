#include <stdio.h>
#include <math.h>
int lab_9(int x);
int main(void)
{
 int x, y;
 printf("Enter a positive integer number: ");
 scanf("%d", &x);
 y = lab_9(x);
 printf("%d", y);
}
int lab_9(int x)
{
 int digit = (int) log10(x);
 if(x == 0)
 return 0;
 return ((x%10 * pow(10, digit)) + lab_9(x/10));
