#include <stdio.h>
int main()
{
    /*for(fact=1;num>1;num--){
        fact=fact*num;
        printf("%d\n",fact);
    }
    int start,stop,step;
    float celsius;
    stop=400;
    step=20;
    printf("Fahrenheit\tCelsius\n");
    for(start=0;start<=stop;start+=step){
        celsius=5*(start-32)/9;
        printf("%d\t\t%.3f\n",start,celsius);
    }

    int fact,num;
    printf("Input a number\n");
    scanf("%d",&num);
    for(fact=1;num>1;num--){
        fact=fact*num;
    }
    printf("The factorial is %d",fact);*/
    /*int i = 1, j = -1, k = 0, w, x, y, z;
    w = i || j ||k ;
    x = i && j && k ;
    y = i || j && k ;
    z = i && j && k ;
    printf("w=%d x=%d y=%d z=%d\n",w,x,y,z) ;
    int n,sum=0,r,temp;
    printf("Input your number\n");
    scanf("%d",&n);
    for(sum=0;sum<n;sum/=10){
    for(;n>0;n/=10){
        r=n%10;
        printf("%d",r);
    }
    printf("\n");
    }
    temp=n;
    for(;n>0;n/=10){
        r=n%10;
        sum=sum+(r*r*r);
    }
    if(temp==sum){
        printf("Armstrong number\n");
    }else{
        printf("Not an armstrong number\n");
    }*/
    int largest, secLargest, temp, i = 0, j, n;
    int a[14];
    largest = a[0];
    secLargest = a[1];
    printf("How many numbers do u wanna input?\n");
    scanf("%d", &n);
    for (j = 0; j < n + 1; j++)
    {
        printf("%d: ", j);
        scanf("%d", &a[j]);
    }
    for (; i < 12; i++)
    {
        if (a[i] > largest)
        {
            temp = largest;
            largest = a[i];
            secLargest = temp;
        }
    }
    printf("Largest is %d\nSecond largest is %d\n", largest, secLargest);
    /*
    int matA[2][2],matB[2][2],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("matA[%d][%d]: ",i,j);
            scanf("%d",&matA[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("matB[%d][%d]: ",i,j);
            scanf("%d",&matB[i][j]);
        }
        printf("\n");
    }
    printf("MatA:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",matA[i][j]);
        }
        printf("\n");
    }
    printf("MatB:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",matB[i][j]);
        }
        printf("\n");
    }
    printf("\nResulting matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",matA[i][j]+matB[i][j]);
        }
        printf("\n");
    }printf("Input a number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==temp){
        printf("Armstrong number\n");
    }else{
        printf("Not armstrong number\n");
    }*/
}