#include<stdio.h>
int main(){
    int A;//A is initialized for user input holding
    printf("Input your age\n");
    scanf("%d",&A);//this requests for user input of age
    if(A>=0 && A<=3){
        printf("Your belong in Nursery\n");
    }else if(A>=4 && A<=10){
        printf("You belong in Primary\n");
    }else if(A>=11 && A<=13){
        printf("You belong in JHS\n");
    }else{
        printf("You can't be in this school\n");
    }
    return 0;
}