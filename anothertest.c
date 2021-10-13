#include<stdio.h>
int main(){
    int r,sum,i,n,j;
    n=4245;
    r=n%10;
    if(n/r==1111){
        printf("All the numbers in the digit are the same.\n");
    }else{
        printf("All the numbers in the digit are different.\n");
    }
}