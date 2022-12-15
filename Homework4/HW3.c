// Online C compiler to run C program online
#include <stdio.h>

int main() {
int count;
double array[10],sum=0;

for(int i=0;i<10;i++)
{
    scanf("%lf",&array[i]);
    sum = sum+array[i];
    if(array[i]>5 && array[i]<10)
    {
        count++;
    }
}
printf("\nChislata ot masiva sa:\n");    
for(int i=0;i<10;i++)
{
printf("%.2lf  ",array[i]);    
}
printf("\nTotal sum is:%.2lf",sum);   
printf("\n\nNumbers between 5 and 10 are:%d",count);   
    return 0;
}