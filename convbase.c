#include<stdio.h>
int main(){
    int n,temp,i;
    int a[10];
    printf("Input your value in base 10 and the base you want it converted to\n");
    scanf("%d%d",&n,&temp);
    for(i=0;n>0;i++){
        a[i]=n%temp;
        n/=temp;
        }
    for (i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}