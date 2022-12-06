#include <stdio.h>
#include <stdlib.h>

int main () {

int num;
float value,parallel=0,serial=0;
float Rp=0;
printf("Enter number of resistors (N):");
scanf("%d",&num);

      for (int i=0;i<num;i++)
      {
      printf("Enter value of R%d:",i+1);
      scanf("%f",&value);
      serial=serial+value;
      Rp=((1/value)+Rp);
      }
   parallel= 1/Rp;
   printf("R_serial:%.2f omhs\n",serial);   
   printf("R_parallel:%.2f omhs\n",parallel);
   return(0);
}