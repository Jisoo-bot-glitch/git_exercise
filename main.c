#include "calc.h"
#include "print.h"

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


    return 0; // 이부분을 추가합니다. 잘 될거야 모두들 화이팅 !! 

    return 0;

    return 0;
}