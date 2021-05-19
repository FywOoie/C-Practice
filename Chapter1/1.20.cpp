/*读取一组书籍记录，将每条记录打印在标准输出上。*/

#include "Sales_item.h"
#include <iostream>

int main(){
    Sales_item book;
    while(std::cin >> book)
        std::cout << book << std::endl;
    system("pause");//等待用户信号
    return 0;
}
