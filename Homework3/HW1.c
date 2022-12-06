// Online C compiler to run C program online
#include <stdio.h>

int main() {
int j=20,n=10,m=1000;
//от 0 до 20 през 1;
for (int i=0;i<21;i++)
{
    printf("%d  ",i);
}
 printf("\n");
//от 20 до 30 през 1; 
while (j>19 && j<31)
{
  printf("%d  ",j);  
  j++;
}
 printf("\n");
 //от 10 до 100 през 5; 
 do
 {
 printf("%d  ",n);
 n=n+5;
 }
 while (n<101);
 printf("\n");
// от 20 до 10 през 1;
 for (int i=20;i>=10;i--)
{
    printf("%d  ",i);
}
 printf("\n");
// от 1000 до 0 през 100.
 do
 {
 printf("%d  ",m);
 m-=100;
 }
 while (m>=0);
    return 0;
}