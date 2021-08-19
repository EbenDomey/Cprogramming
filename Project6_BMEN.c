
#include<stdio.h>
int residentialBilling(float *billAmount); //function prototype for the residential billing
int businessBilling(float *billAmount);//function prototype for the business billing

int main(){
    int acc,pass;// integer declaration of Customer Account Number and Customer Password
    float amount;//floating point declaration of Customer's billing amount
    char cusStat;//character declaration of Customer type
    printf("\t\t******************************\n");
    printf("\t\t*            UGTV            *\n");
    printf("\t\t******************************\n");
    printf("Account Number: ");//Residential Account is 110568 and Business Account is 115162
    scanf("%d",&acc);//User inputs his or her account number
    printf("Password: ");
    scanf("%d",&pass);//User inputs his or her password
    //Switch menu is created to verify account number to determine customer Type
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
    //The if statement is used to control the output of the billing amount depending on the customer type
    if(cusStat == 'R') {
        residentialBilling(&amount);//Calling residentialBilling function by reference to the variable amount
        printf("Dear residential customer %dR, your billing amount is $%.2f\n",acc,amount);
    }else if(cusStat == 'B') {
        businessBilling(&amount);//Calling businessBilling function by reference to the variable amount
        printf("Dear business customer %dB, your billing amount is $%.2f\n",acc,amount);
    }
}
//definition of the residentialBilling function
int residentialBilling(float *billAmount){
    int chanNum;//local declaration of integer variable
    float billPro,bacSer,premChan;//local declaration of floating point variable
    billPro=4.50;//local initialisation of floating point variable
    bacSer=20.50;
    printf("Number of Channels: ");
    scanf("%d",&chanNum);
    premChan=(float)7.50*chanNum;
    *billAmount=(float)billPro+bacSer+premChan;
    return *billAmount;//return value is billAmount
}
//definition of the businessBilling function
int businessBilling(float *billAmount){
    int chanNum;//local declaration of integer variable
    float billPro,bacSer,premChan;//local declaration of floating point variable
    billPro=15.00;//local initialisation of floating point variable
    printf("Number of Channels: ");
    scanf("%d",&chanNum);
    if(chanNum==10)
        bacSer=75.00;
    else
        bacSer=5*premChan;
    premChan=(float)50*chanNum;
    *billAmount=(float)billPro+bacSer+premChan;
    return *billAmount;//return value is billAmount

}
