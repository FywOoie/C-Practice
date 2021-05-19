/*读取具有多个相同isbn的销售记录，输出所有记录之和*/

#include "Sales_item.h"
#include <iostream>

int main(){
    Sales_item item, itemTemp;
    Sales_item itemSum;
    int count = 1;

    while(std::cin >> item){
        if((itemTemp.isbn() != item.isbn()) && (count != 1)){//检查前后两次是否有相同ISBN以及是否为第一次判断
            std::cout << "There are items which have different ISBN!" << std::endl;
            break;
        }else{
            itemTemp = item;//将现有item赋值给itemTemp
            itemSum += item;
            count++;
        }
        std::cout << itemSum << std::endl;//输出记录和
    }

    return 0;
}