#include <iostream>
#include <string>

int main(){
    //声明变量
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    //赋值
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    
    a=42;b=42;c=42;//正确
    //d=42;e=42;f=42;//错误
    std::cout << std::to_string(a) + '\n' + std::to_string(b) + '\n' + std::to_string(c) + '\n' << std::endl;
    std::cout << d << std::endl;//0x62fccc
    std::cout << e << std::endl;//0x62fcc8,与d差四个字节
    std::cout << f << std::endl;

    return 0;
}