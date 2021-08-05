#include<stdio.h>
#include<ctype.h>
int main(){
    char a,b;
    printf("%d\n",(15<10));
    printf("input a letter\n");
    scanf("%c",&a);
    b=tolower(a);
    switch(b){
        case 'r':
        printf("You are a residential\n");
        break;
        case 'b':
        printf("You are in business\n");
        break;
        default:
        printf("This input is not recognized in the menu\n");
        break;
    }
}

