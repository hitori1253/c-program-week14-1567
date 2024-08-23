#include<stdio.h>
int testpointer(){
    int *pc, c;
    c = 22;
    printf("Address of c:%p\n",&c);
    printf("Vlue of c:%d\n",c);

    pc = &c;
    printf("Address of pointer pc:%p\n",pc);
    printf("Content of pointer pc:%d\n",*pc);

    c = 11;
    printf("Address of pointer pc:%p\n",pc);
    printf("Content of pointer pc:%d\n",*pc);

    *pc = 2;
    printf("Vlue of pc:%d\n",*pc);
    printf("Address of c:%p\n",&c);
}