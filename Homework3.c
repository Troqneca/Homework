#include <stdio.h>

int main()
{
int base1,base2,h,area;

printf(" Please enter base1 of the trapez:"); //Нз как е трапец на английски
scanf("%d",&base1);
printf(" Please enter base2 of the trapez:");
scanf("%d",&base2);
printf(" Please enter the height of the trapez:");
scanf("%d",&h);
area = (base1 + base2)/2 * h;

printf(" The area of the trapez is:%d\n",area);

return 0;
}
