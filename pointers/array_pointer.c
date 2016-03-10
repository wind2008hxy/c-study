#include <stdio.h>

int main () {

    int i,a[]={1,2,3,4,5,6,7,8,9,0};
    for (i=0;i<=9;i++) {

        //result are the same

        printf("%d\n",a[i]);
        printf("%d\n",*(a+i));

    }
}
