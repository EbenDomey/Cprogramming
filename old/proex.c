#include <stdio.h>
#include<math.h>
int main(){
    //please place each project in separate files
    //project 1
    float x,y,z,s,t;
    printf("Input length x: ");
    scanf("%f",&x);
    printf("Input length y: ");
    scanf("%f",&y);
    printf("Input length z: ");
    scanf("%f",&z);
    s=(float)(0.5*x)+(0.5*y)+(0.5*z);
    t=s*(s-x)*(s-y)*(s-z);
    printf("The area is %.3f square-units\n",sqrt(t));

    //project 2
    float m,n,d,k,f;
    printf("First mass: ");
    scanf("%f",&m);
    printf("Second mass: ");
    scanf("%f",&n);
    printf("Distance: ");
    scanf("%f",&d);
    k=0.0000000667;
    f=(double)(k*m*n)/pow(d,2);
    printf("Force is: %.12lf dyn\n",f);

    //project 3
    float netBalance,payment,intRateMonth,aveDaiBal,interest;
    int d1,d2;
    printf("Net Balance: ");
    scanf("%f",&netBalance);
    printf("Payment: ");
    scanf("%f",&payment);
    printf("Interest Rate per Month: ");
    scanf("%f",&intRateMonth);
    printf("Number of days in the billing cycle: ");
    scanf("%d",&d1);
    printf("Number of days payment is made before billing cycle: ");
    scanf("%d",&d2);
    aveDaiBal=(float)(netBalance*d1-payment*d2)/d1;
    interest=aveDaiBal*intRateMonth;
    printf("The interest is %.2fcedis\n",interest);

    //project4
    float a,b,c,discrim,root1,root2;
    printf("Provided you have an equation ax^2+bx+c\n");
    printf("Input a: ");
    scanf("%f",&a);
    printf("Input b: ");
    scanf("%f",&b);
    printf("Input c: ");
    scanf("%f",&c);
    discrim=pow(b,2)-4*a*c;
    if(discrim<0){
        printf("This will return complex roots\n");
    }else if(discrim>0){
        printf("This will return real distinct roots\n");
        root1=(float)-b+(pow(discrim,0.5)/(2*a));
        root2=(float)-b-(pow(discrim,0.5)/(2*a));
        printf("The roots are %.3f and %.3f\n",root1,root2);
    }else if(discrim==0){
        printf("This will return real and equal roots\n");
        root1=(float)-b+(pow(discrim,0.5)/(2*a));
        printf("The root is %.3f\n",root1);
    }

    }