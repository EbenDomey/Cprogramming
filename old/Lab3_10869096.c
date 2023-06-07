#include<stdio.h>
int main(){
    int A;
    printf("Input your age\n");
    scanf("%d",&A);
    if(A>=0 && A<=3){
        printf("Your belong in Nursery\n");
    }else if(A>=4 && A<=10){
        printf("You belong in Primary\n");
    }else if(A>=11 && A<=13){
        printf("You belong in JHS\n");
    }
    return 0;
}