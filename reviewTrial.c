#include<stdio.h>
#include<math.h>
int main(){
    int i,j;
    printf("Input your value for n\n");
    scanf("%d", &i);
    j=-i;
    for(;i>=j;i--){
        printf("%d\n",i);
    }

}