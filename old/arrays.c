#include<stdio.h>
int main(){
    int i,j,temp,largest,secLargest;
    int a[10]={ 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
    /*for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[j]>a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=9;i>=0;i--){
        printf("%d,",a[i]);//for sorted in ascending order;
    }
    printf("\n");
    for(j=0;j<10;j++){
        printf("%d,",a[j]);//for sorted in descending;
    }
    printf("\n");*/
    largest=a[0];
    secLargest=a[1];
    for(i=0;i<10;i++){
        printf("%d,",a[i]);
        if(a[i]>largest){
            secLargest=largest;
            largest=a[i];
    }
    else if(a[i]>secLargest &&a[i]!=largest){
        secLargest=a[i];
}
}
printf("\nLargest is %d\nSecond largest is %d\n",largest,secLargest);
}
