#include <stdio.h>

int fact(int n){
    if(n<0)
        return 0;
    else if (n==0)
        return 1;
    else if (n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main(){
    int n=4;
    printf("result is %d\n",fact(n));
    return 0;
}
