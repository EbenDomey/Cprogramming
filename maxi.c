#include<stdio.h>
int main(){
    int a[14]={100,3,4,567,8746,6,32,908,10};
    int sec[9];
    int largest=a[0],b,secLargest=a[1];
    for (int i=0;i<9;i++){
        if(largest<a[i]){
            b=largest;
            largest=a[i];
            sec[i]=a[i];
            a[i]=b;
        }
    }
    printf("Max: %d\nMin: %d\n",largest,a[0]);
    for(int i=0;i<9;i++){
        printf("%d, ",sec[i]);
    }

    /*int r,sum=0,temp,n;
    printf("Input a number\n");
    scanf("%d",&n);
    temp=n;
    for(;n>0;n/=10){
        r=n%10;
        sum=sum+(r*r*r);
    }
    if (temp==sum){
        printf("Its an armstrong number\n");
    }else{
        printf("Its not an armstrong number\n");
    }*/
}