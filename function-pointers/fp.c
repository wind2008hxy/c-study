#include <stdio.h>

//function prototype
void sayHello();

// function implementation
void sayHello() {
    printf("hello world\n");
}

// calling from main
int main() {
//    sayHello();
    void (*sayHelloPtr)() = sayHello;//函数指针，空参数
    (*sayHelloPtr)();
    sayHelloPtr();
}
