// Restaurant Bill
// Compute tax and tip on bill
// Accept tax and tip as percentages from command line
// Display meal cost, tax amount, tip amount, and total bill.
// Meal should be randomly selected between Salad, Soup, Sandwich, and Pizza

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    int counter;
    char value[10];
    char *eptr;
    double result;
    double taxDivisor = 100.0;

//    printf("Program Name Is: %s",argv[0]);
    if(argc==1)
//        printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
    if(argc>=2)
    {
//        printf("\nNumber Of Arguments Passed: %d",argc);
        for(counter=0;counter<argc;counter++)
            printf("\nargv[%d]: %s",counter,argv[counter]);
    }
    strcpy(value, argv[1]);
    result = strtod(value, &eptr);
    if (result == 0)
    {
        /*warning message */
        if (errno == ERANGE)
            printf("The value provided was out of range\n");
    }

    /* char to double*/
//    printf("\n%f decimal\n", result);
    double taxAmount = result;
    double percentAsDecimal1 = result / taxDivisor;
//    printf("%f", percentAsDecimal1);
    strcpy(value, argv[2]);

    /* char to double */
    result = strtod(value, &eptr);
    if (result == 0)
    {
        if (errno == ERANGE)
            printf("The value provided was out of range\n");
    }

    /* Display the converted result */
//    printf("\n%f decimal\n", result);
    double tipAmount = result;
    double percentAsDecimal2 = result / taxDivisor;
//    printf("%f", percentAsDecimal2);   
    int r = rand() % 4 +3;
//    printf("\n""%d", r);
    double price;
    double priceMultTax;
    double priceWithTax;
    double priceMultTip;
    double priceWithTip;
    double totalMealCost;
    if (r == 1)
    {
        price = 9.95;
        printf("\nSalad: %f", price);
        priceMultTax = price * percentAsDecimal1;
        priceWithTax = priceMultTax + taxAmount;
        priceMultTip = price * percentAsDecimal2;
        priceWithTip = priceMultTip + tipAmount;
        totalMealCost = price + priceMultTax + priceMultTip;
        printf("\n Meal Cost: %f", price);
        printf("\n Tax Amount: %f", priceMultTax);
        printf("\n Tip Amount: %f", priceMultTip);
        printf("\n Total Meal Bill: %f", totalMealCost);
        printf("\n");
    }
    if (r == 2)
    {
        price = 4.55;
        printf("\nSoup: %f", price);
        priceMultTax = price * percentAsDecimal1;
        priceWithTax = priceMultTax + taxAmount;
        priceMultTip = price * percentAsDecimal2;
        priceWithTip = priceMultTip + tipAmount;
        totalMealCost = price + priceMultTax + priceMultTip;
        printf("\n Meal Cost: %f", price);
        printf("\n Tax Amount: %f", priceMultTax);
        printf("\n Tip Amount: %f", priceMultTip);
        printf("\n Total Meal Bill: %f", totalMealCost);
        printf("\n");
    }
    if (r == 3)
    {
        price = 13.25;
        printf("\nSandwich: %f", price);
        priceMultTax = price * percentAsDecimal1;
        priceWithTax = priceMultTax + taxAmount;
        priceMultTip = price * percentAsDecimal2;
        priceWithTip = priceMultTip + tipAmount;
        totalMealCost = price + priceMultTax + priceMultTip;
        printf("\n Meal Cost: %f", price);
        printf("\n Tax Amount: %f", priceMultTax);
        printf("\n Tip Amount: %f", priceMultTip);
        printf("\n Total Meal Bill: %f", totalMealCost);
        printf("\n");
    }   
    if (r == 4)
    {
        price = 22.35;
        printf("\nPizza: %f", price);
        priceMultTax = price * percentAsDecimal1;
        priceWithTax = priceMultTax + taxAmount;
        priceMultTip = price * percentAsDecimal2;
        priceWithTip = priceMultTip + tipAmount;
        totalMealCost = price + priceMultTax + priceMultTip;
        printf("\n Meal Cost: %f", price);
        printf("\n Tax Amount: %f", priceMultTax);
        printf("\n Tip Amount: %f", priceMultTip);
        printf("\n Total Meal Bill: %f", totalMealCost);
        printf("\n");
    }
    return 0;
}