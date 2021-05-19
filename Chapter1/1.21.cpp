/*读取两个isbn相同的sales_item对象，输出他们的和*/

#include "Sales_item.h"
#include <iostream>

int main(){
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if(item1.isbn() == item2.isbn())//two items should have the same ISBN
        std::cout << item1 + item2 << std::endl;
    else
        std::cout << "Two Sales items are not the same!" << std::endl;

    return 0;
}
