#include <stdio.h>

int main ()
{
    double item1, item2, item3, cash,total,change,VAT_Sale,VAT;

    printf("Enter price of item 1: ");
    scanf("%lf",&item1);

    printf("Enter price of item 2: ");
    scanf("%lf",&item2);

    printf("Enter price of item 3: ");
    scanf("%lf",&item3);

    printf("Enter cash: ");
    scanf("%lf",&cash);


    total = item1 + item2 + item3;
    change = cash - total;
    VAT_Sale = total / 1.12;
    VAT = total - VAT_Sale;

    printf("------------------------------\n");

    printf("Item 1%24.2lf\n",item1);
    printf("Item 2%24.2lf\n",item2);
    printf("Item 3%24.2lf\n",item3);

    printf("------------------------------\n");

    printf("Total %24.2lf\n",total);
    printf("Cash %25.2lf\n",cash);
    printf("Change %23.2lf\n",change);

    printf("------------------------------\n");

    printf("VAT Sale%22.2lf\n",VAT_Sale);
    printf("VAT%27.2lf\n",VAT);

    printf("------------------------------\n");

    return 0;
}