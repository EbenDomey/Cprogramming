#include<stdio.h>
void displayIntro();//prototype of the void type function displayIntro

int main(){
    displayIntro();//calling of the displayIntro function in the main function
    return 0;
}

//definition of a void type function that accepts no parameters display the card below
void displayIntro(){
    printf("*********************************************************\n");
    printf("*             Programming Assignment 1                  *\n");
    printf("*              Computer Programming 1                   *\n");
    printf("*                Author: Ebenezer Domey                 *\n");
    printf("*             Due Date: Sunday, August 22, 2021         *\n");
    printf("*********************************************************\n");
}