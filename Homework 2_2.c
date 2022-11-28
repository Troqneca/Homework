#include <stdio.h>

int main() {

float Uf,R,Uin,I;

printf("Vuvedi Uin(V):");
scanf("%f",&Uin);
printf("Vuvedi Uf(V):");
scanf("%f",&Uf);
printf("Vuvedi I(mA):");
scanf("%f",&I);

R = (Uin-Uf)/I*1000;

    printf("Resistance is:%.3f\ kohmn",R/1000);

    return 0;
}