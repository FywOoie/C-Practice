//编写程序更改指针以及指针所指对象的值

#include <iostream>

int main(){
    //变量和指针初始化
    int *p1 = nullptr;
    int *p2 = nullptr;
    int num1 = 1;
    int num2 = 2;

    //更改指针的值
    p1 = &num1;
    p2 = &num2;
    std::cout << *p1 << std::endl;//1
    std::cout << *p2 << std::endl;//2

    //更改指针所指对象的值
    num1 = *p2;
    std::cout << num1 << std::endl;//2

    return 0;
}