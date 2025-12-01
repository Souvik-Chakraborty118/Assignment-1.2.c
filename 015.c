//15) Compute BMI and then display index accordingly to the BMI
#include <stdio.h>
int main() {
double weight,height,bmi;
printf("Enter your weight in Kilograms: ");
scanf("%lf",&weight);
printf("Enter your height in Meters: ");
scanf("%lf",&height);
if(weight<=0||height<=0){
    printf("Invalid Input! Enter Positive number please!");
    return 1;
}
bmi=weight/(height*height);
printf("Your BMI is:%.2f\n",bmi);
if(bmi<18.5){
    printf("You are Underweight");
}
else if(bmi>=18.5&&bmi<25){
    printf("You have normal weight");
}
else if(bmi>=25&&bmi<30){
    printf("You are Overweight");
}
else if(bmi>=30){
    printf("You are Obese");
}
return 0;
}
