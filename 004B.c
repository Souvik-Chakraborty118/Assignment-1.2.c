//4) Compute Grade according to marks
//B) Now using switch case
#include <stdio.h>
int main(){
int m;
printf("Enter marks: ");
scanf("%d", &m);
if (m<0||m>100) {
    printf("INVALID INPUT!");
    return 1;
}
switch (m / 10) {
    case 10:
    case 9:
    case 8:
        printf("GRADE A");
        break;
    case 7:
    case 6:
        printf("GRADE B");
        break;
    case 5:
        printf("GRADE C");
        break;
    case 4:
        printf("GRADE D");
        break;
    default:
        printf("GRADE F");
        break;
}
return 0;
}
