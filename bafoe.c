#include<stdio.h>
int main(){
int n;
printf("Input a value to find the range of even numbers\n");
scanf("%d", &n);
for(int i=1; i<n; i++){
    if(i%2!=0){
        continue;
    }
    printf("%d\n", i);
}
}

