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
}