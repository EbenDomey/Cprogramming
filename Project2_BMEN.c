#include<stdio.h>
void change(int *);//prototype of the parameter accepting function change
void increment(int);//prototype of the parameter accepting function increment
int main(){
    int x,y;//declaration of x and y integer variables
    x=25;// initialisation of x
    y=10;//initialisation of y

    printf("Y before function call: %d\n",y);//printing the value of y in the main function
    increment(y);//function call by the value of the parameter
    printf("Y after function call: %d\n",y);//actual value is not the same as the formal value

    printf("\nX before function call: %d\n",x);//prints the value of x in the main function
    change(&x);//function call by reference to variable x in main
    printf("X after function call: %d\n",x);//The formal value and the actual value are the same now
}

void increment(int y){
    y+=5;
    printf("Y from function: %d\n",y);//prints the formal value for incremented y=15
}


void change(int *x){
    (*x)*=50;
    printf("X from function: %d\n",*x);//prints the formal value which would be x=1250
}
