#include <stdio.h>

int main()
{
int num1 = -20;
int num2 = 30;
int num3;
int num4;

printf(" Number 1 = %d, Number 2 = %d\n", num1, num2);

num3 = num1;
num4 = num2;
num1 = num4;
num2 = num3;
printf(" Number 1 = %d, Number 2 = %d\n", num1, num2);

return 0;
}
