#include<stdio.h>
int testpointerByPointers(){
    int *pc,c,d;
    float *pa,e;
    c = 5;
    d = -15;
    e = 20.5;

    pc = &c;
    printf("%d\n", *pc);
    pc = &d;
    printf("%d\n", *pc);
    pa = &e;
    printf("%f\n", *pa);
    return 0;
}