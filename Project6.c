#include<stdio.h>
#include<ctype.h>
int residentialBilling(float *billAmount);
int businessBilling(float *billAmount);

int main(){
    int acc,pass;
    float amount;
    char cusStat;
    printf("\t\t******************************\n");
    printf("\t\t*            UGTV            *\n");
    printf("\t\t******************************\n");
    printf("Account Number: ");//Account number for residential is 110568 business account is 115162
    scanf("%d",&acc);
    printf("Password: ");
    scanf("%d",&pass);
    switch (acc) {
        case 110568:
        cusStat='R';
        break;
        case 115162:
        cusStat='B';
        break;
        default:
        printf("Invalid input\nTry again or join us by signing up\n");
        break;
    }
    if(cusStat == 'R') {
        residentialBilling(&amount);
        printf("Dear residential customer %dR, your billing amount is $%.2f\n",acc,amount);
    }else if(cusStat == 'B') {
        businessBilling(&amount);
        printf("Dear business customer %dB, your billing amount is $%.2f\n",acc,amount);
    }
}
int residentialBilling(float *billAmount){
    int chanNum;
    float billPro,bacSer,premChan;
    billPro=4.50;
    bacSer=20.50;
    printf("Number of Channels: ");
    scanf("%d",&chanNum);
    premChan=(float)7.50*chanNum;
    *billAmount=(float)billPro+bacSer+premChan;
    return *billAmount;
}
int businessBilling(float *billAmount){
    int chanNum;
    float billPro,bacSer,premChan;
    billPro=15.00;
    printf("Number of Channels: ");
    scanf("%d",&chanNum);
    if(chanNum==10)
        bacSer=75.00;
    else
        bacSer=5*premChan;
    premChan=(float)50*chanNum;
    *billAmount=(float)billPro+bacSer+premChan;
    return *billAmount;

}
