#include<stdio.h>
#include<math.h>//included math.h header file for the use of pow function
int rootQuadraticFinder(float, float, float);//function prototype

int main(){
    float a,b,c;//global variable declaration
    printf("Considering an equation ax2+bx+c=0\n");
    printf("A: ");
    scanf("%f",&a);
    printf("B: ");
    scanf("%f",&b);
    printf("C: ");
    scanf("%f",&c);
    rootQuadraticFinder(a,b,c);//function call by value of parameters
}
//definition of the return type function with 3 formal parameters
int rootQuadraticFinder(float a, float b, float c){
    float t,x,y;//local variable declaration
    t=(float)pow(b,2)-4*(a*c);
    if(t<0){
        printf("This quadratic equation will return complex roots\n");
    }else if(t>0){
        printf("This quadratic equation will return real distinct roots\n");
        x=(float)(-b+pow(t,0.5))/(2*a);
        y = (float)(-b-pow(t,0.5))/(2*a);
        printf("The roots of the quadratic equation is %.1f and %.1f\n",x,y);
    }else if(t==0){
        printf("This quadratic equation will return real equal roots\n");
        x=(float)(-b+pow(t,0.5))/(2*a);
        printf("The root of the quadratic equation is %.1f\n",x);
    }
    return 0;
}