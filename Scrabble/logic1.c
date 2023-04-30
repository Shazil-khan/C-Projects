#include <stdio.h>
#include <string.h>
#include "ctype.h"
///       **** SCRABLE GAME ****
int arr[]={ 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}; // global scope
int main()
{
int sum1=0,sum2=0;
char w1[20];
scanf("%s", &w1);
char w2[20];
scanf("%s", &w2);
int i,j;
for(i=0; i<20; i++)
{
    if(isupper(w1[i])==1)
    {
        sum1+=arr[w1[i]- 'A'];
    }
    else
    {
         sum1+=arr[w1[i]- 'a'];
    }
    
}
for(j=0; j<20; j++)
{
    if(isupper(w2[i])==1)
    {
        sum2+=arr[w2[i]- 'A'];
    }
    else
    {
         sum2+=arr[w2[i]- 'a'];
    }
    
}
if(sum1>sum2)
{
    printf("player 1 wins");
}
else
{
    printf("player 2 wins");
}

}
