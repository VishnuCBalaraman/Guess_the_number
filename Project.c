//This program is a guessing game in which the user need to input two numbers between a certain range. The required number will be between the range of numbers that you have been declared earlier.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j,n1,n2,num,ans;
  
  // srand function is used to get different required numbers in each time you run.  
    srand(time(NULL));

    printf("\\** GUESS THE NUMBER **//\n\n");
    
    printf("Enter the Lower Range : ");
    scanf("%d",&n1);
    printf("Enter the Upper Range : ");
    scanf("%d",&n2);

    if(n1>=n2 || n2-n1==1)
    {
        printf("\nInvalid Input\n");
        exit(0);
    }

  // rand funtion is used to get random required number.
    num = ((rand()%(n2-n1+1)) + n1) ;

    if(num == n1)
    {
        num++;
    }
    else if(num == n2)
    {
        num--;
    }

    for(i=5;i>0;i--)
    {
        printf("\nChance Left : ");
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\nEnter Your Guess : ");
        scanf("%d",&ans);
        if(ans == num)
        {
            printf("\n* CONGRATULATION *\n  YOU WON!\n",num);
            exit(0);
        }
        else if(ans > num)
        {
            printf("The Required Number is Lower than that of %d\n",ans);
        }
        else if(ans < num)
        {
            printf("The Required Number is Greater than that of %d\n",ans);
        }
    }

    printf("\nYOU LOST!");
    printf("\nTHE REQUIRED NUMBER IS %d\n",num);
    

    return 0;
}
