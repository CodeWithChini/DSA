#include<stdio.h>
void main()
{
    int unit;
    float bill, total_bill ;

    printf("Enter unit\n");
    scanf("%d" , &unit);
    if(unit <= 50)
    {
        bill = unit * 0.50;
        printf("%f" , bill);
    }
    else if(unit <= 150 && unit > 50)
    {
        bill = 50 * 0.5 + (unit - 50) * 0.75;
        printf("%f" , bill);
    }
    else if(unit <= 250)
    {
        bill = 50*0.50 + 100*0.75 + (unit-150)*1.2;
        printf("%f" , bill);
    }
   else
   {
         bill = 50*0.50 + 100*0.75 + 150*1.2 + (unit-250)*1.5;
         printf("%f" , bill);
   }
}
