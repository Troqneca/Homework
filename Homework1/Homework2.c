#include <stdio.h>

int main()
{
int l,h,per,area;

printf(" Please enter the lenght of the rectangular:");
scanf("%d",&l);
printf(" Please enter the height of the rectangular:");
scanf("%d",&h);
per = 2*l + 2*h;
area = l*h;
printf(" The perimeter of the rectangular is:%d\n",per);
printf(" The area of the rectangular is:%d\n",area);

return 0;
}
