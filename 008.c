//8) Amicable number or not
#include <stdio.h>
int main(){
int n,n1,sum=0,sum1=0,i;
printf("Enter first positive number: ");
scanf("%d",&n);
printf("Enter second positive number: ");
scanf("%d",&n1);
if(n<=0){
    printf("Please enter POSITIVE NUMBER!");
    return 1;
}
for(i=1;i<=n/2;i++){
    if(n%i==0){
        sum=sum+i;
    }
}
for(i=1;i<=n1/2;i++){
    if(n1%i==0){
        sum1=sum1+i;
    }
}
if(sum==n1&&sum1==n){
    printf("%d and %d are Amicable numbers\n",n,n1);
}
else{
    printf("%d and %d are not Amicable numbers\n",n,n1);
}
return 0;
}
