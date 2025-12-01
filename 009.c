//9) Perfect number or not
#include <stdio.h>
int main(){
int n,i,sum=0;
printf("Enter a positive number: ");
scanf("%d",&n);
if(n<=0){
    printf("PLease enter a POSITIVE NUMBER!");
    return 1;
}
for(i=1;i<n;i++){
    if(n%i==0){
        sum=sum+i;
    }
}
if(sum==n){
    printf("%d is Perfect Number",n);
}
else{
    printf("%d is not a Perfect Number",n);
}
return 0;
}
