//2) Use senital controlled repetition to read the digits the digits followed by -1
#include <stdio.h>
int main(){
int n;
printf("Enter a digit and should end with -1: ");
if(scanf("%d",&n)!=1){
    return 1;
}
while(n!=-1){
    printf("%d",n);
    if(scanf("%d",&n)!=1){
        break;
    }
}
return 0;
}
