//4) Compute Grade according to marks
//A) Now using if else ladder
#include <stdio.h>
int main(){
int m;
printf("Enter marks: ");
scanf("%d",&m);
if(m>=80&&m<=100){
    printf("GRADE A");
}
else if(m>=60&&m<=79){
    printf("GRADE B");
}
else if(m>=50&&m<=59){
    printf("GRADE C");
}
else if(m>=40&&m<=49){
    printf("GRADE D");
}
else if(m>=0&&m<=39){
    printf("GRADE F");
}
else{
    printf("INVALID INPUT!");
}
return 0;
}
