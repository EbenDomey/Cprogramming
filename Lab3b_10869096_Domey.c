#include<stdio.h>
#include <stdlib.h>
int main(){
    int val[14];//this collects the numbers into an array and iterates on them for summation
    int i,total=0;
    for (i=0;i<10;i++){
        printf("index %d: ",i);
        scanf("%d",&val[i]);//the loop makes it possible to take in all the numbers without multiple inputs
    }
    for(i=0;i<10;i++){
        total=total+val[i];
        printf("The total is %d\n",total);
    }
        /*printf("Input your values for a and b\n");
scanf("%d\n%d", &a,&b);
if(a>b){
    c=a-b;
    printf("The result is %d\n",c);
}else if(b>a){
    c=b-a;
    printf("The result is %d\n",c);
}else{
    printf("Syntax Error!\n");
}

printf("Input values\n");
scanf("%d\n%d\n%d",&a,&b,&c);
if(a==b||a==b==c){
    printf("These equal numbers are present\n");
}else{
    printf("These numbers are not equal\n");
}
printf("Enter amount saved in bank\n");
scanf("%f",&d);
result =(float)(d*5*18)/100;
printf("Dear customer the interest obtained in 1.5 years is %.2f\n",result);
printf("Input your basic salary imran\n");
scanf("%f",&d);
e=(float)40/100*d;
t=(float)20/100*d;
result=(float)d+e+t;
printf("Wow imran your gross salary is %.2f\n",result);
printf("Input a value\n");
scanf("%d",&b);
if(b%2==0 && b%5==0){
    printf("The number is fully divisible by 2 and 5\n");
}else{
    printf("The number is not fully divisible by 2 and 5\n");
}*/
}