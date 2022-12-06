#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

   time_t t;
   
 int n = 20; // number of random values
 float sum = 0,average;
 int random,big=0,small=20;
 
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 20 random numbers from 0 to 20 */
   for( int i = 0 ; i < n ; i++ ) 
   {
      random = rand() % 20;
      printf("%d ", random);
      sum=sum + random;
      if(random > big)
      {
       big = random;   
      }
      if(random < small)
      {
       small = random;   
      }
   }
    printf("\nTotal sum is:%.0f ", sum);
    average = sum/n; 
    printf("\nAverage sum is:%.2f ", average);
    printf("\nBiggest number is:%d ", big);
    printf("\nSmallest number is:%d ", small);
   return(0);
}