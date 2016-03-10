#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//泛型指针
//generic pointer

int swap3(void *x,void *y,int size){
    void *tmp;

    if ((tmp = malloc(size)) == NULL)
        return -1;

    memcpy(tmp,x,size);
    memcpy(x,y,size);
    memcpy(y,tmp,size);
    free(tmp);

    return 0;
}

int main () {
    int a = 3 ,b = 4;
    swap3(&a,&b,1);
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    return 0;
}
