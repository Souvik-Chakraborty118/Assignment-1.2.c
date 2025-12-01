//14) Compute minimum,maximum,sum and average of a sequence of numbers using sentinel controlled repetition
#include <stdio.h>
#include<limits.h>
int main() {
int n,count=0;
long sum=0;
const int senti=-1;
int min=INT_MIN;
int max=INT_MAX;
printf("Enter number (-1 to stop): ");
scanf("%d",&n);
while(n!=senti){
    if(n>max){
        max=n;
    }
    if(n<min){
        min=n;
    }
    sum=sum+n;
    count++;
    printf("Enter number (-1 to stop): ");
    scanf("%d",&n);
}
if(count>0){
    double av=(double)sum/count;
    printf("\nResults are:\n");
    printf("Maximum: %d\n",max);
    printf("Minimum: %d\n",min);
    printf("Sum: %ld\n",sum);
    printf("Average: %.2f\n",av);
}
else{
    printf("No numbers are entered");
}
return 0;
}
