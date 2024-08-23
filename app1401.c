int testpointerAddress(){
    int vara = 5,varb = 10;
    printf("var: %d\n",vara); //var:5
    printf("var: %d\n",varb); //var:5

    printf("Address of var: %p", &vara);
    printf("Address of var: %p", &varb);
    return 0;
}