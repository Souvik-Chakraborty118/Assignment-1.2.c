//5) Sum of sequence using sentinel
#include <stdio.h>
int main(){
int n,sum=0;
const int seni=-1;
printf("Enter numbers to sum and type %d to stop\n\n",seni);
printf("Enter a number: ");
scanf("%d",&n);
while(n!=seni){
    sum=sum+n;
    printf("Enter a number: ");
    scanf("%d",&n);
}
printf("\nSum of all digits: %d",sum);
return 0;
}
