#include<stdio.h>
int main(){
    /*int largest,secLargest,temp,i=0,j,n;
    int a[14];
    largest =a[0];
    secLargest =a[1];
    printf("How many numbers do u wanna input?\n");
    scanf("%d",&n);
    for(j=0;j<n+1;j++){
        printf("%d: ",j);
        scanf("%d",&a[j]);
    }
    for(;i<12;i++){
        if(a[i]>largest){
            temp=largest;
            largest =a[i];
            secLargest =temp;
        }
    }
    printf("Largest is %d\nSecond largest is %d\n",largest,secLargest);*/
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
    }

}