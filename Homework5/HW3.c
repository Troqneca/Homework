// Online C compiler to run C program online
#include <stdio.h>
#define MIN(x,y,z) (x<y ? (x<z ? x:z):(y<z ? y:z))
#define MAX(x,y,z) (x>y ? (x>z ? x:z):(y>z ? y:z))
#define SWAP(a,b) { int temp = a; a = b; b = temp; }
#define CHECKBIT(mask,bit) !!(mask&(1 << bit))
#define SETBIT(mask,bit) mask|=(1<<bit)
#define CLEARBIT(mask,bit) mask&=~(1<<bit)
#define INVERSEBIT(mask,bit) mask^=(1<<bit)
 
int main()
{
    int option,mask=0,end=1; 
    int add,clear,inverse;
    while (end==1)
    {
        printf("\n1. MIN\n");
        printf("2. MAX\n");
        printf("3. SWAP\n");
        printf("4. CHECKBIT\n");
        printf("5. SETBIT\n");
        printf("6. CLEARBIT\n");
        printf("7. INVERSEBIT\n");
        printf("8. Exit of program\n");
        scanf("%d", &option);
        
        if(option == 1)
        {
            int min,x,y,z;
            printf("Enter 3 numbers (use space between them):");
            scanf("%d %d %d",&x,&y,&z);
        min=MIN(x,y,z);
        printf("Min: %d",min);
        }
        else if (option == 2)
        {
             int max,x,y,z;
             printf("Enter 3 numbers (use space between them):");
            scanf("%d %d %d",&x,&y,&z);
        max=MAX(x,y,z);
        printf("Max: %d",max);
        }
        else if (option == 3)
        {
            int a,b;
        printf("\nEnter number a & b (use space between them):");
        scanf("%d %d",&a,&b);
        SWAP(a,b);
        printf("%d,%d\n",a,b);
        }
        else if (option == 4)
        {
            for (int i=31;i>=0;i--)
            {
            printf("%d",CHECKBIT(mask,i)); 
            }
        }
        else if (option == 5)
        {
        printf("\nEnter bit to set:");
        scanf("%d",&add);
        SETBIT(mask,add);
        }
        else if (option == 6)
        {
        printf("\nEnter bit to clear:");
        scanf("%d",&clear);
        CLEARBIT(mask,clear);
        }
        else if (option == 7)
        {
        printf("\nEnter bit to inverse:");
        scanf("%d",&inverse);
        INVERSEBIT(mask,inverse);
        }
        else if (option == 8)
        {
        printf("\nThanks for using my program, Good bye!");
        printf("\nVersion 1.0 - build by GDT");
        end=0;
        }
        else 
        printf("\nPlease select number between 1 and 8");
    }
 
    return 0;
}