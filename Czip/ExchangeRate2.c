#include<stdio.h>

int main(void)
{

    int dollarExchangeRate = 1200;
    int howMuchDollar = 0;
    int krw;

    printf("Welcome!\n");

    printf("plz, input the dollarExchangeRate:");
    scanf(" %d",&dollarExchangeRate);

    if( dollarExchangeRate > 2000 ){
        printf("check the dollarExchangeRate!\n");
    }

    printf("plz , input the dollar : ");

    scanf("%d",&howMuchDollar);

    if( howMuchDollar > 500){
        printf("You have to declare");
    }else{
        printf("You don't have to declare");
    }


    krw = howMuchDollar * dollarExchangeRate;

    printf("%d($$$) -> %d(krw)",howMuchDollar,krw);

    return 0;

}
