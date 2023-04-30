#include <stdio.h>
int main()
{
// array game Q4 pf mids see picture in folder
    int n,players,i,temp;
    printf("Enter the size of array");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the element at %d location", i);
        scanf("%d", &arr[i]);
    }
    while (1)
    {
        printf("Player one turns\n");
        printf("Enter the index i of the element you choose from array");
        scanf("%d", &i);
        arr[0]=arr[0]-1;
        temp=arr[i];
        arr[i]=arr[0];
        arr[0]=temp;
        if (arr[0]==1)
        {
            players=1; // updating the variable to check which is the current player in the variable
            break;
        }
        printf("Player two turns\n");
        printf("Enter the index i of the element you choose from array");
        scanf("%d", &i);
        arr[0]=arr[0]-1;
        temp=arr[i];
        arr[i]=arr[0];
        arr[0]=temp;
        if (arr[0]==1)
        {
            players=2;
            break;
        }
    }
    printf("The winner is Player %d :", players);
}