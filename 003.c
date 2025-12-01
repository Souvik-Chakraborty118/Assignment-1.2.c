//3) Palindrome number
#include <stdio.h>
int main(){
int n,rev=0,lastD,temp,i;
printf("Enter a positive input: ");
scanf("%d",&n);
while(n<0){
    printf("Invalid Input");
    return 1;
}
temp=n;
for(i=0;temp>0;i++){
    lastD=temp%10;
    rev=(rev*10)+lastD;
    temp=temp/10;
}
if(rev==n){
    printf("%d is %d so it is a Palindrome Number\n",n,rev);
}
else{
    printf("%d is %d so it is not a Palindrome Number\n",n,rev);
}
return 0;
}
