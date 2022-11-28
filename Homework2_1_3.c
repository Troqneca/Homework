#include <stdio.h>

int main() {

int a,b,c,d;

printf("Vuvedi a:");
scanf("%d",&a);
printf("Vuvedi b:");
scanf("%d",&b);
printf("Vuvedi c:");
scanf("%d",&c);
printf("Vuvedi d:");
scanf("%d",&d);

if((a&&b) || (c&&d))
{
    printf("Lamp is ON!\n");
}
else 
{
    printf("Lamp is OFF!\n");
}
    return 0;
}