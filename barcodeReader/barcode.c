#include <stdio.h>
int sumodd(int *a);
int sumeven(int *a);

int main()
{   int array[12];
    printf("Enter the 12 digit barcode ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &array[0],&array[1],&array[2],&array[3],&array[4],&array[5],&array[6],&array[7],&array[8],&array[9],&array[10],&array[11]);
    int chkd,check_digit;
    chkd=sumodd(array)*3;
    chkd=chkd + (sumeven(array));
    printf("%d", chkd);
    if((chkd%10)==0)
        check_digit=0;
    else{
        check_digit=chkd%10;
        check_digit=10-check_digit;
    }
    if(array[11]==check_digit)
    {
        printf("Valid");
    }
    else
    {
        printf("invalid");
    }
}

int sumodd(int *a){
    int i=0,sum=0;
    for(i; i<12; i+=2){
        sum+=a[i];
    }
return sum;
}
int sumeven(int *a){
    int i=1,sum=0;
    for(i; i<10; i+=2){
        sum+=a[i];
    }
return sum;
}