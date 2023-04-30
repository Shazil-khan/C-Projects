#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status
{
    WON,Continue,lost
};
int dice();
int main()
{
    enum Status game,points;
    int i=1,sum;
    srand( time( NULL ) );

    while (1) // the game is always true until we stops on the based condition
    {
        sum=dice();
        if(i==1 && (sum==7 || sum==11))
        {
            game=WON;
            break;
        }
         if(i==1 && (sum==2 || sum==3 || sum==12))
        {
            game=lost;
            break;
        }
        else if(i==1)
        {
            points=sum;
        }
        if (i>1 && sum==points)
        {
            game=WON;
            break;
        }
        else if (sum==7)
        {
            game=lost;
            break;
        }
        i++;
    }
    if (game==WON)
    {
        printf("Player Wins");
    }
    else
    {
        printf("Player Lost");
    }
    
    
    
}
int dice()
{
    int s;
    int d1,d2;
    d1=rand()%6;
    d2=rand()%6;
    printf("dice Rolled %d + %d: \n", ++d1,++d2);
    return (d1+d2);
}