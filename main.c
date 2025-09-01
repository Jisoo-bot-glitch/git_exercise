#include "calc.h"
#include"print.h"

int main()
{
    CALC_DATA data1;
    data1.operand1 = 10;
    data1.operand2 = 20;

    add(&data1);
    print(&data1);

    CALC_DATA data2;
    data2.operand1 = 20;
    data2.operand2 = 15;


    return 0;
}