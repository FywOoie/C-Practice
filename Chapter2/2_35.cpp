#include <iostream>

int main(){
    const int i = 42;//int常量
    auto j = i;//int，因为auto忽略了顶层const
    const auto &k = i;//int常量的引用
    auto *p = &i;//指向int常量的常量指针
    const auto j2 = i, &k2 = i;//j2为int常量，k2为int常量的引用

    std::cout << typeid(i).name() << std::endl;
    std::cout << typeid(j).name() << std::endl;
    std::cout << typeid(k).name() << std::endl;
    std::cout << typeid(p).name() << std::endl;
    std::cout << typeid(j2).name() << std::endl;
    std::cout << typeid(k2).name() << std::endl;

    return 0;
}