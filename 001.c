//1) Extract number from a digit and display in left to right and right to left
#include <stdio.h>
int main(){
int n,lastD,temp,temp2,i=0,j,*digits;
printf("Enter a positive real number: ");
scanf("%d",&n);
if(n<0){
    printf("Enter valid input");
    return 1;
}
printf("Digits from Left to Right\n");
temp2=n;
while(temp2>0){
    digits[i]=temp2%10;
    temp2=temp2/10;
    i++;
}
for(j=i-1;j>=0;j--){
    printf("%d\n",digits[j]);
}
printf("\n");
printf("Digits from Right to Left\n");
temp=n;
while(temp>0){
    lastD=temp%10;
    printf("%d\n",lastD);
    temp=temp/10;
}
printf("\n");
return 0;
}
