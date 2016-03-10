#include <stdio.h>

void swap1(int x,int y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

void swap2(int *x,int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main () {
    int a = 3 ,b = 4;
    swap2(&a,&b);
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    return 0;
}
