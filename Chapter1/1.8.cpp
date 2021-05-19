#include <iostream>

int main(){
    std::cout << "/*";//打印/*
    std::cout << "*/" << std::endl;//打印*/

    //std::cout << "/* "*" */";//不合法,
    //invalid operands of types 'const char [4]' and 'const char [4]' to binary 'operator*'
    std::cout << "/* * */" << std::endl;//改正第三句话

    //std::cout << "/* "*/" /* "/*" */";//不合法，
    //应输入表达式,missing terminating " character,缺少右引号
    std::cout << "/* */ /* /* */" << std::endl;//改正第四句话

    return 0;
}
