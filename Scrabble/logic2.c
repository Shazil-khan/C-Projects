#include <stdio.h>
#include <string.h>
int arr[]={ 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}; // global scope

int main()
{
/// a,e,i,l,n,o,p,r,s,t  worth=1  // b,c,m,p worth = 3 // g,d worth= 2 // f,h,v,w,y worth = 4; // k worth=5 //j,x worth = 8, // q,z worth = 10
printf("************ SCRABLE GAME ******************\n");
char w1[20];
int i,sum1=0,sum2=0;
printf("PLAYER\'S ONE TURN :");
scanf("%s",&w1);
int l1=strlen(w1);
getchar();

for (i = 0; i<l1; i++)
{
    switch (w1[i])
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'l':
    case 'L':
    case 'N':
    case 'n':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    case 'R':
    case 'r':
    case 'S':
    case 's':
    case 'T':
    case 't':
        sum1 +=1;
        break;
    case 'B':
    case 'b':
    case 'C':
    case 'c':
    case 'M':
    case 'm':
    case 'P':
    case 'p':
        sum1 +=3;
        break;
    case 'G':
    case 'g':
    case 'D':
    case 'd':
        sum1 +=2;
        break;
    case 'F':
    case 'f':
    case 'H':
    case 'h':
    case 'V':
    case 'v':
    case 'W':
    case 'w':
    case 'Y':
    case 'y':
        sum1 += 4;
        break;
    case 'K':
    case 'k':
        sum1 += 5;
        break;
    case 'j':
    case 'J':
    case 'X':
    case 'x':
        sum1 += 8;
        break;
    case 'Q':
    case 'q':
    case 'Z':
    case 'z':
        sum1 +=10;
        break;
    default:
        break;
    }
}
char w2[20];
printf("PLAYER\'S TWO TURN :");
scanf("%s",&w2);
getchar();
int l2=strlen(w2);
for (i = 0; i<l2; i++)
{
    switch (w2[i])
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'l':
    case 'L':
    case 'N':
    case 'n':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    case 'R':
    case 'r':
    case 'S':
    case 's':
    case 'T':
    case 't':
        sum2 +=1;
        break;
    case 'B':
    case 'b':
    case 'C':
    case 'c':
    case 'M':
    case 'm':
    case 'P':
    case 'p':
        sum2 +=3;
        break;
    case 'G':
    case 'g':
    case 'D':
    case 'd':
        sum2 +=2;
        break;
    case 'F':
    case 'f':
    case 'H':
    case 'h':
    case 'V':
    case 'v':
    case 'W':
    case 'w':
    case 'Y':
    case 'y':
        sum2 += 4;
        break;
    case 'K':
    case 'k':
        sum2 += 5;
        break;
    case 'j':
    case 'J':
    case 'X':
    case 'x':
        sum2 += 8;
        break;
    case 'Q':
    case 'q':
    case 'Z':
    case 'z':
        sum2 +=10;
        break;
    default:
        break;
    }
}
if (sum1>sum2)
{
    printf("Player one wins");

}
else if(sum2>sum1)
{
    printf("Player two wins");
}
else
{
    printf("Tie !");
}

}