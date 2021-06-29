#include<stdio.h>
int main(){
    printf("Helloworld\n");
    int a;//declaration
    int b=2;
    a = 3;//initialisation. This stores the value of 2 to the variable a until its changed
    int c;
    c = a + b;
    printf("The sum of %d and %d is %d\n",a,b,c);
    int degree;
    float myNum=1.8;
    int secNum = 32;
    float result = (degree * myNum) + secNum;
    printf("%d is equal to %fF\n",degree,result);
    return 0;
}