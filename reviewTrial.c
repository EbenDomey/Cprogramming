#include<stdio.h>
#include<math.h>
int main(){
    int d;
printf("Please input a year\n");
scanf("%d",&d);
if(d%4==0){
    printf("This is a leap year\n");
}else{
    printf("This is an ordinary year\n");
}
}