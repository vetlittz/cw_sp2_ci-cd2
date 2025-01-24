#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int data[8192] = {0};
int contextStack[8192] = {0}, contextStackIndex = 0;
int opStack[8192] = {0}, opStackIndex = 0, opTemp = 0;
int lastBindDataIndex = 0;

int main() {
    contextStackIndex = 0;
    opStackIndex = 0;
    opTemp = 0;
    lastBindDataIndex = 0;

    //";"

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"25630"
    opStack[++opStackIndex] = opTemp = 0x0000641E;

    //"<-"
    lastBindDataIndex = opStack[opStackIndex - 1];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex], opStackIndex = 0;

    //null statement (non-context)

    //"4"
    opStack[++opStackIndex] = opTemp = 0x00000004;

    //"Scan"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //"8"
    opStack[++opStackIndex] = opTemp = 0x00000008;

    //"Scan"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"Scan"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //"kKKK"
    opStack[++opStackIndex] = opTemp = data[0x00000010];

    //"bBBB"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"++"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex--];

    //"dDDD"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"2"
    opStack[++opStackIndex] = opTemp = 0x00000002;

    //"Div"
    opTemp = opStack[opStackIndex - 1] /= opStack[opStackIndex--];

    //"--"
    opTemp = opStack[opStackIndex - 1] -= opStack[opStackIndex--];

    //"eEEE"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"4"
    opStack[++opStackIndex] = opTemp = 0x00000004;

    //"**"
    opTemp = opStack[opStackIndex - 1] *= opStack[opStackIndex--];

    //"++"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex--];

    //"Print"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    return 0;
}