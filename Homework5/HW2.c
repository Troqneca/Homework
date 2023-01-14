// Online C compiler to run C program online
#include <stdio.h>
#include <stdint.h>

int checkbit( uint64_t mask,int bit)
{
    return !!(mask&(1ULL  << bit));
}
//------------------------------
void setbit( uint64_t *mask,int bit)
{
    *mask|=(1ULL <<bit);
}
//------------------------------
void clearbit( uint64_t *mask,int bit)
{
    *mask&=~(1ULL <<bit);
}
//------------------------------
void togglebit( uint64_t *mask, int bit)
{
     *mask^=(1ULL <<bit);
}

int main(void)
{
    uint64_t mask = 0;
    int option, added, deleted, update;
    int end=1, error=3;
    while (end==1)
    {
        printf("\n1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Exit\n");
        scanf("%d", &option);
        if (option == 1)
        {   
            printf("Enter student number:");
            scanf("%d",&added);
            if(added >= 0 && added <64)
            {
             printf("Student %d is added to the list\n",added);
             setbit(&mask,added); 
            }
           else 
      printf("\nNo such student in this class (enter between 0 and 63)\n");
           
        }
        else if (option == 2)
        {
            printf("Enter student number to be deleted:");
            scanf("%d",&deleted);
            if(deleted >= 0 && deleted <64)
            {
            printf("Student %d is deleted from the list\n",deleted);
            clearbit(&mask,deleted);
            }
            else
      printf("\nNo such student in this class (enter between 0 and 63)\n");
        }
        else if (option == 3)
        {
              int count =0;
              printf("Current list of students attendance:\n");
             for(int i=63;i>=0;i--)
             {
             printf("%d",checkbit(mask,i));
             
                 if(checkbit(mask,i) == 1)
                 {
                     count++;
                 }
             }
             printf("\nTotal number of students attendance is %d\n",count);
        }
        else if (option == 4)
        {
            printf("Enter student number to change his status:");
            scanf("%d",&update);
            if(update >= 0 && update <64)
            {
            printf("Student %d status has been updated\n",update);
            togglebit(&mask,update);  
            }
            else
     printf("\nNo such student in this class (enter between 0 and 63)\n");

        }
        else if (option == 5)
        {
             printf("\nThanks for using my program, Good bye!");
             printf("\nVersion 1.0 - build by GDT");
             end=0;
        }
    else {
     printf("\nPlease choose option between 1 and 5 (Retry left: %d)",error);
         error--;
              if(error < 0)
                {
                end=0;
                printf("\nYou are too stupid to use this program!\n");    
                }                
         }
    }     
    return 0;
}
