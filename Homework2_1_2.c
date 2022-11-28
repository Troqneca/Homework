#include <stdio.h>

int main() {

int a,b,c;

printf("Vuvedi a:");
scanf("%d",&a);
printf("Vuvedi b:");
scanf("%d",&b);
printf("Vuvedi c:");
scanf("%d",&c);

if((a||b) || (b||c))
{
    printf("Lamp is ON!\n");
}
else 
{
    printf("Lamp is OFF!\n");
}
    return 0;
}