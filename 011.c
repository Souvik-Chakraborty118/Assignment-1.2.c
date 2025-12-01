//11) Conversion from One base to Another where input should be validated
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int valid(const char *ns,int input){
int i;
for(i=0;i<strlen(ns);i++){
    int digit=ns[i]-'0';
    if(digit<0||digit>=input){
        return 0;
    }
}
return 1;
}
int convertB(const char *ns,int input,int output){
    if(!valid(ns,input)){
        printf("ERROR: Invalid input for input base\n");
        return 1;
    }
long long decimalv=0;
int p=0,i;
for(i=strlen(ns)-1;i>=0;i--){
    int digit=ns[i]-'0';
    decimalv=decimalv+digit*pow(input,p);
    p++;
}
char r[64];
int j=0;
if(decimalv==0){
    r[j++]='0';
}
else{
    while(decimalv>0){
        int rem=decimalv%output;
        r[j++]=rem+'0';
        decimalv=decimalv/output;
    }
}
r[j]='\0';
int s=0,en=j-1;
while(s<en){
    char temp=r[s];
    r[s]=r[en];
    r[en]=temp;
    s++;
    en--;
}
printf("Converted number: %s(base %d)\n",r,output);
return 0;
}
int main(){
char ns[64];
int input,output;
printf("Enter the number: ");
scanf("%s",ns);
printf("Enter the input base(0-10): ");
scanf("%d",&input);
printf("Enter the output base(0-10): ");
scanf("%d",&output);
if(input<2||input>10||output<2||output>10){
    printf("Base must be between 2 and 10!\n");
    return 1;
}
convertB(ns,input,output);
return 0;
}
