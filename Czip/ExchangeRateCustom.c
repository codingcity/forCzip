#include<stdio.h>

int main(void)
{

    int dollarExchangeRate = 1200;
    int howMuchDollar = 0;
    int krw;
    char nationName;

    printf("Welcome!\n");

    printf("plz, input the dollarExchangeRate:");
    scanf(" %d",&dollarExchangeRate);

    scanf(" %c",&nationName);

    printf("plz , input the dollar : ");

    scanf(" %d",&howMuchDollar);

    krw = howMuchDollar * dollarExchangeRate;

    printf("%d($$$) -> %d(krw)?",howMuchDollar,krw);

    return 0;

}
