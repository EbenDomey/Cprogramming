#include<stdio.h>
#include<math.h>
int main(){
    //problem 1
    float kilometers,feet,meters,inches,centimeters;
    printf("Please input the distance for your journey\n");
    scanf("%f",&kilometers);
    meters=kilometers*1000;
    feet=kilometers*3280.84;
    inches=kilometers*39370.1;
    centimeters=kilometers*100000;
    printf("%.3fkm  %.3fft  %.3fm  %.3fin  %.3fcm\n",kilometers,meters,feet,inches,centimeters);

    //problem 2
    float radius,area;
    printf("Hello there please input your radius in centimeters to attain area\n");
    scanf("%f",&radius);
    area= 3.14 *(radius*radius);
    printf("your radius is %f and your area is %.3f square centimeters\n",radius,area);
    //problem 3
    float height,base,hypotenuse;
    printf("Input your base and height values for your triangle\n");
    scanf("%f %f",&height,&base);
    hypotenuse = (height*height)+(base*base);
    printf("Your value for height and base are %.3f and %.3f and the hypotenuse is %.3f\n",height,base,pow(hypotenuse,0.5));

    //problem 4
    float length,width,recArea,perimeter;
    printf("Input your value for length and width\n");
    scanf("%f %f",&length,&width);
    recArea=length*width;
    perimeter= (2*length) + (2*width);
    printf("Length: %.3f  Width: %.3f  Area: %.3f  Perimeter: %.3f\n",length,width,recArea,perimeter);

    //problem 5
    float firstNum, secNum, intermediary;
    printf("Input your first number for swapping\n");
    scanf("%f",&firstNum);
    printf("Input your second number for swapping\n");
    scanf("%f",&secNum);
    printf("Initially, first number is %.3f  and second number is %.3f\n",firstNum,secNum);
    intermediary=secNum;
    secNum=firstNum;
    printf("finally, first number is %.3f and second number is %.3f\n",intermediary,secNum);

}