//13) Compute student frequency as a bar chart using '*' and sentinel controlled repetiton -1
#include <stdio.h>
#include<stdbool.h>
int main() {
int n,seni=-1,i,A=0,B=0,C=0,D=0,F=0;
do{
    printf("Enter marks (It will continue till user input -1): ");
    scanf("%d",&n);
    if(n>100||n<seni){
    printf("Invalid Input");
    return 1;
}
    if(n==seni){
        break;
    }
    if(n>=80&&n<=100){
        A++;
    }
    else if(n>=60&&n<=79){
        B++;
    }
    else if(n>=50&&n<=59){
        C++;
    }
    else if(n>=40&&n<=49){
        D++;
    }
    else{
        F++;
    }
   }while(true);
   printf("A: ");
   for(i=0;i<A;i++){
    printf("*");
   }
   printf("\n");
printf("B: ");
for(i=0;i<B;i++){
    printf("*");
}
printf("\n");
printf("C: ");
for(i=0;i<C;i++){
    printf("*");
}
printf("\n");
printf("D: ");
for(i=0;i<D;i++){
    printf("*");
}
printf("\n");
printf("F: ");
for(i=0;i<F;i++){
    printf("*");
}
printf("\n");

return 0;
}
