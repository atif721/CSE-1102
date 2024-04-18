//Write a C program to calculate Electricity Bill. (for data check pdf)

#include<stdio.h>
int main()
{
    // Bill Without Penalty

    const MC=30, SC=10, MIN=20;
    int unit;
    float billWithUnit, netBill,totalBill;
    printf("Enter total unit : ");
    scanf("%d",&unit);

    if(unit<=75)
    {
        billWithUnit = (unit*4.94);
    }
    else if(unit > 75 && unit <= 200)
    {
        billWithUnit = (unit*7.38);
    }
    else if(unit>200 && unit <= 300)
    {
        billWithUnit = (unit*10.56);
    }
    else
    {
        billWithUnit = (unit*12.18);
    }

    totalBill = billWithUnit + MC + SC;
    netBill = totalBill + (totalBill*.05);
    printf("\nNet Bill = %.2f \n",netBill);

    // Bill with penalty

    float penBill, penCharge;
    penCharge = (MIN>(netBill*0.015))? MIN : (netBill*0.015);
    penBill = netBill + penCharge;
    printf("\nBill With Penalty = %.2f \n",penBill);

    getch();
}
