#include<stdio.h>
int main(){
    float Basic,DA,HRA,Gs;
    Basic = 500;
    DA=0.4 *Basic;
    // another way to run the code is to use
    HRA=0.2 *Basic;
    Gs = DA+HRA+Basic;
    printf("%f\n",Gs);
    float c=(float) 98/10; //this is to convert the fraction to a decimal
    printf("%f\n",c);
    //scanf is a c function that enables user input
    int a; //a variable is declared
    printf("Please input any number\n");//a request is made for user input
    scanf("%d",&a);//user inputs
    printf("your number is %d\n", a);//what he inputs is revealed

}