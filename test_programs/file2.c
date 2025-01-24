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

    //"4"
    opStack[++opStackIndex] = opTemp = 0x00000004;

    //"Scan"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //"4"
    opStack[++opStackIndex] = opTemp = 0x00000004;

    //"vALU"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"++"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex--];

    //"<-"
    lastBindDataIndex = opStack[opStackIndex - 1];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex], opStackIndex = 0;

    //null statement (non-context)

    //"For"

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"<-"
    lastBindDataIndex = opStack[opStackIndex - 1];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex], opStackIndex = 0;

    //null statement (non-context)

    //"To" (after "For")
    --data[lastBindDataIndex];
    contextStack[++contextStackIndex] = lastBindDataIndex;
    LABEL__AFTER_TO_00007FF7B6DA9E08:

    //"32767"
    opStack[++opStackIndex] = opTemp = 0x00007FFF;

    //null statement (non-context)

    //"Do" (after "To" after "For")
    if (opStack[contextStack[contextStackIndex]] >= opTemp) goto LABEL__EXIT_FOR_00007FF7B6DA8518;
    ++opStack[contextStack[contextStackIndex]];

    //"8"
    opStack[++opStackIndex] = opTemp = 0x00000008;

    //"vALU"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"--"
    opTemp = opStack[opStackIndex - 1] -= opStack[opStackIndex--];

    //"<-"
    lastBindDataIndex = opStack[opStackIndex - 1];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex], opStackIndex = 0;

    //null statement (non-context)

    //"For"

    //"20"
    opStack[++opStackIndex] = opTemp = 0x00000014;

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"<-"
    lastBindDataIndex = opStack[opStackIndex - 1];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex], opStackIndex = 0;

    //null statement (non-context)

    //"To" (after "For")
    --data[lastBindDataIndex];
    contextStack[++contextStackIndex] = lastBindDataIndex;
    LABEL__AFTER_TO_00007FF7B6DAE8D8:

    //"32767"
    opStack[++opStackIndex] = opTemp = 0x00007FFF;

    //null statement (non-context)

    //"Do" (after "To" after "For")
    if (opStack[contextStack[contextStackIndex]] >= opTemp) goto LABEL__EXIT_FOR_00007FF7B6DACFE8;
    ++opStack[contextStack[contextStackIndex]];

    //"If"

    //"dEVI"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"2"
    opStack[++opStackIndex] = opTemp = 0x00000002;

    //"Ge"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] >= opStack[opStackIndex--];

    //after cond expresion (after "If")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF7B6DB0E40;

    //";" (after "then"-part of If-operator)
    opTemp = 1;
    LABEL__AFTER_THEN_00007FF7B6DB0E40:

    //"Else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF7B6DB1AB8;

    //"Goto" previous ident "eNDB"(as label)
    goto LABEL__000001A60EA5BAC8;

    //null statement (non-context)

    //";" (after "Else")
    LABEL__AFTER_ELSE_00007FF7B6DB1AB8:

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"vALU"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"<-"
    lastBindDataIndex = opStack[opStackIndex - 1];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex], opStackIndex = 0;

    //null statement (non-context)

    //"For"

    //"24"
    opStack[++opStackIndex] = opTemp = 0x00000018;

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"<-"
    lastBindDataIndex = opStack[opStackIndex - 1];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex], opStackIndex = 0;

    //null statement (non-context)

    //"To" (after "For")
    --data[lastBindDataIndex];
    contextStack[++contextStackIndex] = lastBindDataIndex;
    LABEL__AFTER_TO_00007FF7B6DB6160:

    //"32767"
    opStack[++opStackIndex] = opTemp = 0x00007FFF;

    //null statement (non-context)

    //"Do" (after "To" after "For")
    if (opStack[contextStack[contextStackIndex]] >= opTemp) goto LABEL__EXIT_FOR_00007FF7B6DB4870;
    ++opStack[contextStack[contextStackIndex]];

    //"If"

    //"rEMI"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"dEVI"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"Ge"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] >= opStack[opStackIndex--];

    //after cond expresion (after "If")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF7B6DB86C8;

    //";" (after "then"-part of If-operator)
    opTemp = 1;
    LABEL__AFTER_THEN_00007FF7B6DB86C8:

    //"Else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF7B6DB9340;

    //"Goto" previous ident "eNDC"(as label)
    goto LABEL__000001A60EA5C0B8;

    //null statement (non-context)

    //";" (after "Else")
    LABEL__AFTER_ELSE_00007FF7B6DB9340:

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"rEMI"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"dEVI"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"--"
    opTemp = opStack[opStackIndex - 1] -= opStack[opStackIndex--];

    //"<-"
    lastBindDataIndex = opStack[opStackIndex - 1];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex], opStackIndex = 0;

    //null statement (non-context)

    //";" (after "For")
    goto LABEL__AFTER_TO_00007FF7B6DB6160;
    LABEL__EXIT_FOR_00007FF7B6DB4870:
    --contextStackIndex;

    //ident "eNDC"(as label) previous ":"
    LABEL__000001A60EA5C0B8:

    //"If"

    //"rEMI"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"Eg"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] == opStack[opStackIndex--];

    //after cond expresion (after "If")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF7B6DBEEB0;

    //"Goto" previous ident "eNDB"(as label)
    goto LABEL__000001A60EA5BAC8;

    //null statement (non-context)

    //";" (after "then"-part of If-operator)
    opTemp = 1;
    LABEL__AFTER_THEN_00007FF7B6DBEEB0:

    //"8"
    opStack[++opStackIndex] = opTemp = 0x00000008;

    //"dEVI"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"--"
    opTemp = opStack[opStackIndex - 1] -= opStack[opStackIndex--];

    //"<-"
    lastBindDataIndex = opStack[opStackIndex - 1];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex], opStackIndex = 0;

    //null statement (non-context)

    //";" (after "For")
    goto LABEL__AFTER_TO_00007FF7B6DAE8D8;
    LABEL__EXIT_FOR_00007FF7B6DACFE8:
    --contextStackIndex;

    //ident "eNDB"(as label) previous ":"
    LABEL__000001A60EA5BAC8:

    //"If"

    //"dEVI"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"Eg"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] == opStack[opStackIndex--];

    //after cond expresion (after "If")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF7B6DC4E48;

    //"Goto" previous ident "eNDA"(as label)
    goto LABEL__000001A60EA5C648;

    //null statement (non-context)

    //";" (after "then"-part of If-operator)
    opTemp = 1;
    LABEL__AFTER_THEN_00007FF7B6DC4E48:

    //"4"
    opStack[++opStackIndex] = opTemp = 0x00000004;

    //"vALU"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"++"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex--];

    //"<-"
    lastBindDataIndex = opStack[opStackIndex - 1];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex], opStackIndex = 0;

    //null statement (non-context)

    //";" (after "For")
    goto LABEL__AFTER_TO_00007FF7B6DA9E08;
    LABEL__EXIT_FOR_00007FF7B6DA8518:
    --contextStackIndex;

    //ident "eNDA"(as label) previous ":"
    LABEL__000001A60EA5C648:

    //"vALU"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"Print"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    return 0;
}