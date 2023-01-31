/* investment problem */
#include<stdio.h>
#define PERIOD 10
#define PRINCIPAL  5000.0
/*    main program begins   */
int main()
{
    /*declaration statements */
    int year;
    float amount,value,inrate;
    /* assignment statements */
    amount=PRINCIPAL;
    inrate = 0.11;
    year = 0;
    /*   computation statements   */
    /*   computation using while loop  */
    while(year <= PERIOD)
    {
        printf("%2d %8.2f\n",year, amount);
        value=amount + inrate * amount;
        year = year + 1;
        amount = value;
    }
/* while loop ends*/
    }
    /*program ends*/