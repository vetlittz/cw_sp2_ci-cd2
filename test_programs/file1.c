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

    //"If"

    //"aAAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"bBBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"Eg"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] == opStack[opStackIndex--];

    //after cond expresion (after "If")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF61C070910;

    //";" (after "then"-part of If-operator)
    opTemp = 1;
    LABEL__AFTER_THEN_00007FF61C070910:

    //"Else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF61C071588;

    //"Goto" previous ident "cALU"(as label)
    goto LABEL__000002B6D940AFC8;

    //null statement (non-context)

    //";" (after "Else")
    LABEL__AFTER_ELSE_00007FF61C071588:

    //"Goto" previous ident "bALU"(as label)
    goto LABEL__000002B6D940C138;

    //null statement (non-context)

    //ident "cALU"(as label) previous ":"
    LABEL__000002B6D940AFC8:

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"Print"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //"Goto" previous ident "eNAS"(as label)
    goto LABEL__000002B6D9408348;

    //null statement (non-context)

    //ident "bALU"(as label) previous ":"
    LABEL__000002B6D940C138:

    //"If"

    //"aAAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"cCCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"Eg"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] == opStack[opStackIndex--];

    //after cond expresion (after "If")
    if (opTemp == 0) goto LABEL__AFTER_THEN_00007FF61C079238;

    //";" (after "then"-part of If-operator)
    opTemp = 1;
    LABEL__AFTER_THEN_00007FF61C079238:

    //"Else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_00007FF61C079EB0;

    //"Goto" previous ident "cALU"(as label)
    goto LABEL__000002B6D940AFC8;

    //null statement (non-context)

    //";" (after "Else")
    LABEL__AFTER_ELSE_00007FF61C079EB0:

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"Print"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //ident "eNAS"(as label) previous ":"
    LABEL__000002B6D9408348:

    //"4"
    opStack[++opStackIndex] = opTemp = 0x00000004;

    //"Scan"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    return 0;
}