#include<stdio.h>
int main(){
    //conditional statements
    int age;
    printf("What is your age\n");
    scanf("%d",&age);
    if(age < 18){
        printf("you are a minor\n");
    }else if(age > 18){
        printf("permission granted!\n");
    }
}