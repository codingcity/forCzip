#include<stdio.h>

int main(void)
{

    int dollarExchangeRate = 1200;
    int howMuchDollar = 0;
    int krw;

    printf("Welcome!\n");

    printf("plz, input the ExchangeRate\n");



    printf("plz , input the dollar : ");

    scanf("%d",&howMuchDollar);

    krw = howMuchDollar * dollarExchangeRate;

    printf("%d($$$) -> %d(krw)",howMuchDollar,krw);

    return 0;

}
