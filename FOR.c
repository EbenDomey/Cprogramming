#include<stdio.h>
int main(){
    int i,j;
printf("Enter a number\n");
scanf("%d",&i);
for(j=1;i>0;i--){
    j=j*i;
    printf("The factorial is %d\n",j);
}
}