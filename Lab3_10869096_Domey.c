#include<stdio.h>
int main(){
    int num,fact;
printf("Enter a number\n");
scanf("%d",&num);
for(fact=1;num>1;num--){//num>1 is used because any number times itself is the number
    fact=fact*num;
    printf("The factorial is %d\n",fact);
}
int myArray[10]={2,0,5};
    int i;
    for(i=0;i<3;i++)
    {
        printf("For index %d, the value is: %d\n",i,myArray[i]);
    }
}