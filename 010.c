//10) Armstrong number or not
#include <stdio.h>
int main(){
int n,arm=0,c,rem;
printf("Enter a positive number of 3 digits: ");
scanf("%d",&n);
if(n<=0){
    printf("PLEASE!! enter positive number");
    return 1;
}
c=n;
while(n>0){
    rem=n%10;
    arm=(rem*rem*rem)+arm;
    n=n/10;
}
if(c==arm)
printf("Armstrong Number");
else
    printf("Not an Armstrong number");
return 0;
}
