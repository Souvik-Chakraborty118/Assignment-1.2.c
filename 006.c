//6 Prime number or not 
#include <stdio.h>
int main(){
int n,a=0;
printf("\nEnter a positive number: ");
scanf("%d",&n);
if(n<0){
    printf("PLEASE! Enter Positive number!");
    return 1;
}
for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
    }
}
    if(n==1){
        printf("%d is neither prime nor non-prime",n);
    }
    else if(a==0){
        printf("%d is a Prime Number",n);
    }
    else{
        printf("%d is a Non-Prime Number",n);
    }
return 0;
}
