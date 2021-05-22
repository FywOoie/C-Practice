/*读取一组书籍记录，将每条记录打印在标准输出上。*/

#include <iostream>
#include "Sales_data.h"

int main(){
    Sales_data book;
    //获取结构体信息
    std::cout << "Please enter book isbn" << std::endl;
    std::cin >> book.isbn;
    std::cout << "Please enter book number" << std::endl;
    std::cin >> book.bookNum;
    std::cout << "Please enter book price" << std::endl;
    std::cin >> book.unitPrice;

    //生成购买时间和订单号
    book.orderNum = rand();
    book.buyTime = time(0);
    char* dt = ctime(&book.buyTime);

    //输出订单信息
    std::cout << "isbn：" + book.isbn << std::endl;
    std::cout << "number：" + std::to_string(book.bookNum) << std::endl;
    std::cout << "buy time：" << dt;
    std::cout << "unit price：" + std::to_string(book.unitPrice) << std::endl;
    std::cout << "order number：" << book.orderNum << std::endl;

    return 0;
}
