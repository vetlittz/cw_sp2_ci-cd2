#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int data[8192] = {0};
int contextStack[8192] = {0}, contextStackIndex = 0;
int opStack[8192] = {0}, opStackIndex = 0, opTemp = 0;;
int lastBindDataIndex = 0;

int main() {
    contextStackIndex = 0;
    opStackIndex = 0;
    opTemp = 0;
    lastBindDataIndex = 0;

    //";"

    //"4"
    opStack[++opStackIndex] = opTemp = 0x00000004;

    //"Scan"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //"While"
    LABEL__WHILE_00007FF634C3C690:

    //"aAAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"Ge"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] >= opStack[opStackIndex--];

    //after cond expresion (after "While")
    if (opTemp == 0) goto LABEL__AFTER_WHILE_00007FF634C3C690;

    //"4"
    opStack[++opStackIndex] = opTemp = 0x00000004;

    //"aAAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"--"
    opTemp = opStack[opStackIndex - 1] -= opStack[opStackIndex--];

    //"<-"
    lastBindDataIndex = opStack[opStackIndex - 1];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex], opStackIndex = 0;

    //null statement (non-context)

    //"If"

    //"aAAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"2"
    opStack[++opStackIndex] = opTemp = 0x00000002;

    //"Mod"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex--];

    //after cond expresion (after "If")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF634C40D38;

    //continue while (in "then"-part of While-operator)
    goto LABEL__WHILE_00007FF634C3C690;

    //";" (after "then"-part of If-operator)
    opTemp = 1;
    LABEL__AFTER_THEN_00007FF634C40D38:

    //"aAAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"Print"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //end of while
    goto LABEL__WHILE_00007FF634C3C690;
    LABEL__AFTER_WHILE_00007FF634C3C690:

    return 0;
}