/*读取多条销售记录，并统计每个isbn有几条销售记录*/

#include "Sales_item.h"
#include <iostream>

int main(){
    Sales_item item, itemTemp;
    int count = 1;

    if(std::cin >> item){
        while(std::cin >> itemTemp){
            if(item.isbn() == itemTemp.isbn()){//需要相同ISBN
                item = itemTemp;
                count++;
            }else{
                std::cout << item.isbn() << " has been sold " << count << " times." << std::endl;
                item = itemTemp;
                count = 1;//重置计数器
            }
        }
        std::cout << item.isbn() << " has been sold " << count << " times." << std::endl;//最后一条销售记录
    }else{
        std::cout << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}
