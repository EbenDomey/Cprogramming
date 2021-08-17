#include<stdio.h>
int main(){
    int i,j;
    /*int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }*/
    //let's create a matrix shall we..
    int matA[3][2],matB[3][2];
    printf("MatA Input:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("MatA[%d][%d]: ",i,j);
            scanf("%d",&matA[i][j]);
        }
        printf("\n");
    }
    printf("MatB Input:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("MatB[%d][%d]: ",i,j);
            scanf("%d",&matB[i][j]);
        }
        printf("\n");
    }
    printf("MatA Output:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",matA[i][j]);
        }
        printf("\n");
    }
    printf("MatB Output:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",matB[i][j]);
        }
        printf("\n");
    }
    return 0;
}