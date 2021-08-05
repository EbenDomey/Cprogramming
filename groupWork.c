#include<stdio.h>
#include<math.h>
void displayIntro();
void change(int *sum,int b);
void areaAndPerimeter(double length,double width,double *area, double *perimeter);
int areaOfTriangle(float a, float b, float c, float *f);
int rootQuadraticFinder(float a, float b, float c);


int main(){
    //displayIntro();
    int x,y=10;
    float q,f,o;
    double l,w,a,p;
    /*
    printf("Y is %d\n",y);
    printf("Please input your first value\n");
    scanf("%d", &x);
    change(&x,y);
    printf("This is the new value of x %d\n", x);
    printf("However, the value for b remains %d\n",y);
    printf("Input a value for the length\n");
    scanf("%lf",&l);
    printf("Input a value for the width\n");
    scanf("%lf",&w);
    areaAndPerimeter(l,w,&a,&p);
    printf("%.2lf is the area of a rectangle\n%.2lf is its perimeter\n",a,p);
    q=areaOfTriangle(9,3,5,&f);
    printf("Therefore the area of the triangle is %.3f\n",f);*/
    printf("a: ");
    scanf("%f",&q);
    printf("b: ");
    scanf("%f",&f);
    printf("c: ");
    scanf("%f",&o);
    rootQuadraticFinder(q,f,o);
}


void displayIntro(){
    printf("*********************************************************\n");
    printf("*             Programming Assignment 1                  *\n");
    printf("*              Computer Programming 1                   *\n");
    printf("*                   Author: Ebenezer                    *\n");
    printf("*             Due Date: Thursday, Jan. 24               *\n");
    printf("*********************************************************\n");
}
//void function that accepts parameters
void change(int *sum,int b){
    printf("first value: %d\n",*sum);
    (*sum)*=50;
    printf("sum: %d\n",*sum);
    b+=5;
    printf("%d is the new value of b for the function: \n",b);
}
void areaAndPerimeter(double length, double width, double *area, double *perimeter){
    printf("length is %f, width is %f. Therefore..\n",length,width);
    *area = length * width;
    *perimeter = 2*(length + width);
    printf("area is %lf, perimeter is %lf.\n",*area,*perimeter);
}
//return-type function
int areaOfTriangle(float a, float b, float c,float *f){
    float s,d;
    s=(float)(1/2)*(a+b+c);
    d=s*(s-a)*(s-b)*(s-c);
    *f=pow(d,1/2);
    return *f;
}
int rootQuadraticFinder(float a, float b, float c){
    float t,x,y;
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