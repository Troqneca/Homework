// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

 time_t t;
 srand((unsigned) time(&t));
 
 int array[100];
 int random,max=-10,min=10;
 
 for(int i=0; i<100; i++)
 {
     random =  rand() % 21 +(-10);
     
     array[i] = random;
     if(random>max)
     {
         max = random;
     }
     if(random<min)
     {
         min = random;
     }
 }
   printf("Рандом числата са:\n");
  for(int i=0; i<100; i++)
  {
     printf("%d ",array[i]); 
  }
  printf("\nMax number is:%d",max); 
  printf("\nMin number is:%d",min); 
    return 0;
}