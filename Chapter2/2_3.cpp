#include <iostream>

int main(){
    unsigned u = 10, u2 = 42;
    std::cout << u2-u << std::endl;//大于等于0正确
    std::cout << u-u2 << std::endl;//大于等于0正确,小于0取模，即为4294967264
    //过程为：所以可知-32的二进制为 ：10000000000000000000000000100000；
    //然后符号位不变，取得反码     ：11111111111111111111111111011111；
    //最后在末尾加1取得补码        ：11111111111111111111111111100000；转化十进制为4294967264

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;//常规加减法
    std::cout << i - i2 << std::endl;//常规加减法
    std::cout << i - u << std::endl;//大于等于0正确
    std::cout << u - i << std::endl;//大于等于0正确

    return 0;
}
