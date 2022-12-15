#include <stdio.h>

int main() {

int numbers[] = {10,20,5,6,78,101};
float sum=0, average=0;

for(int i=0;i<6;i++)
{
  printf("%d ",numbers[i]);  
  sum = sum + numbers[i];
  
}
printf("\nSum of array is:%.2f ",sum);
average = sum/6;
printf("\nAverage sum of array is:%.2f ",average);  
    return 0;
}