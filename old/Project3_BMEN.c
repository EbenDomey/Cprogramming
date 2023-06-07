#include<stdio.h>
void areaAndPerimeter(double, double, double *, double *);//void-type function prototype
int main(){
    double l,w,a,p;//declaration of variables
    printf("Input a value for the length\n");
    scanf("%lf",&l);//accepts length
    printf("Input a value for the width\n");
    scanf("%lf",&w);//accepts width
    areaAndPerimeter(l,w,&a,&p);//calling of the function by value for l and w and by reference for a and p
    printf("%.2lf is the area of a rectangle\n%.2lf is its perimeter\n",a,p);
}
//definition of the function areaAndPerimeter
void areaAndPerimeter(double length, double width, double *area, double *perimeter){
    printf("length is %f, width is %f. Therefore..\n",length,width);
    *area = length * width;
    *perimeter = 2*(length + width);
}