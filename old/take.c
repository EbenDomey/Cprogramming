#include<stdio.h>
int main(){
    int i;
    int j;
    for(i=1;i<6;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("wonder wonder\n");
    return 0;
}