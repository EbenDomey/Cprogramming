#include<stdio.h>//"stdio.h" is the header file. It is introduced into the code with the "#include"keyword

//int main is the main function
int main(){
    //for number one
    printf("Hello Cprogramming!\n");

    //for number two
    int a=18;//an integer variable "a" is created and the value inside it is my age which is "18"
    float b= 106.59;//a float variable "b" is created and the value inside it is "106.89"
    char c='M';//a char variable "c" is created and the value inside it is 'M'

    //to provide an Output
    //remember that "%d" is integer "%f" is float and "%c" is char
    printf("A is %d B is %f C is %c\n",a,b,c);
}