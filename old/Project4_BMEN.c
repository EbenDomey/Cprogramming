#include<stdio.h>
#include<math.h>//math header file included in the source code to make use of pow function
int areaOfTriangle(float, float, float, float *);//return-type function prototype
int main(){
    float f,b,c,d;//global declaration of floating point variables
    printf("First Length: ");
    scanf("%f",&b);
    printf("Second Length: ");
    scanf("%f",&c);
    printf("Third Length: ");
    scanf("%f",&d);
    areaOfTriangle(b,c,d,&f);//function is called with actual parameters and reference f is passed into function
    printf("The area of the triangle is %.3f\n",f);//prints the area of the triangle in 3 decimal places
}
//return-type function definition with formal parameters
int areaOfTriangle(float a, float b, float c,float *f){
    float s,d;//local declaration of variables
    s=(0.5*a)+(0.5*b)+(0.5*c);
    d=s*(s-a)*(s-b)*(s-c);
    *f=pow(d,0.5);
    return *f;//return value is variable f
}