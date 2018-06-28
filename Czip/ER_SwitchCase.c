#include<stdio.h>

int main(void)
{

    int dollarExchangeRate = 1200;
    int yuanExchangeRate = 170;
    int yenExchangeRate = 10;
    int currencyChoice;

    int howMuch = 0;
    int krw;

    printf("Welcome!\n");
    printf("plz, choose the currency:");
    printf("1.Dollar \n 2.Yuan\n 3.Yen\n");
    scnaf("%d",currencyChoice);


    printf("plz , input the money : ");

    scanf("%d",&howMuch);

    if( howMuch > 500){
        printf("You have to declare");
    }else{
        printf("You don't have to declare");
    }


    switch(currencyChoice)
    {
        case 1:
            //dollar
            krw = howMuch * dollarExchangeRate;
            printf("%d($)->",howMuch);
            break;
        case 2:
            //yuan
            krw = howMuch * yuanExchangeRate;
            printf("%d(CNY)->",howMuch);
            break;
        case 3:
            //yen
            krw = howMuch * yenExchangeRate;
            printf("%d(JPY)->",howMuch);
            break;    
        default:
    }

    printf("%d(krw)",krw);

    /*
    printf("plz, input the dollarExchangeRate:");
    scanf(" %d",&dollarExchangeRate);

    if( dollarExchangeRate > 2000 ){
        printf("check the dollarExchangeRate!\n");
    }
    */

    return 0;

}
