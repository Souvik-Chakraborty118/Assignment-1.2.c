//7) Prime factors of a number
#include <stdio.h>
int main(){
int n,i;
printf("Enter a Positive number: ");
scanf("%d",&n);
if(n<0){
    printf("ENTER POSITIVE NUMBER!!!");
    return 1;
}
printf("Prime factors of %d are: ",n);
while(n%2==0){
    printf(" %d ",2);
    n=n/2;
}
for(i=3;i*i<=n;i=i+2){
    while(n%i==0){
        printf(" %d ",i);
        n=n/i;
    }
}
if(n>1){
    printf("%d",n);
}
return 0;
}
