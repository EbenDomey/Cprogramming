#include<stdio.h>
#include<string.h>
int main(){
    int i=0;
    char g;
    /*if(i<1){
        printf("4 is lesser\n");
    }else{
        printf("kofi is a girl");
    }
    int A;
    printf("Tell me your grade\n");
    scanf("%d",&A);
    if(A>80){
        printf("you had A\n");
    }else{
        printf("you had B\n");
}*/

    printf("tell me you gender\n");
    scanf("%c",&g);
    if(g=='M'){
        printf("He is Male\n");
        }
    else if (g=='F'||g=='G')
    {
     printf("you are female\n");
    }
    char name[] ="Ebenezer";
    printf("%s is your name\n",name);
    return 0;
    }