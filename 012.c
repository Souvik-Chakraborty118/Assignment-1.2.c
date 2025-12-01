//12) Convert number in Text form
#include <stdio.h>
int main() {
int n,lastD,rev=0;
printf("Enter a positive number: ");
scanf("%d",&n);
if(n<0){
    printf("ENTER POSITIVE NUMBER!");
    return 1;
}
while(n>0){
    lastD=n%10;
    n=n/10;
    rev=rev*10+lastD;
}
while(rev>0){
    lastD=rev%10;
    rev=rev/10;
    switch(lastD){
    case 0:
        printf("ZERO");
        break;
    case 1:
        printf(" ONE ");
        break;
    case 2:
        printf(" TWO ");
        break;
    case 3:
        printf(" THREE ");
        break;
    case 4:
        printf(" FOUR ");
        break;
    case 5:
        printf(" FIVE ");
        break;
    case 6:
        printf(" SIX ");
        break;
    case 7:
        printf(" SEVEN ");
        break;
    case 8:
        printf(" EIGHT ");
        break;
    case 9:
        printf(" NINE ");
        break;
    }
}
return 0;
}
