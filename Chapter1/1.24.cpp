/*输入表示多个isbn的多条销售记录来测试上一个程序，每个isbn的记录应该聚在一起。*/

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
/*
 *测试结果
 *isbn1 1 1
 *isbn1 2 1 
 *isbn1 1 1
 *isbn1 3 1 
 *isbn2 1 3 
 *isbn1 has been sold 4 times.
 *isbn2 1 3 
 *isbn2 1 3           
 *isbn2 5 3 
 *isbn3 1 10
 *isbn2 has been sold 4 times.
 *
 */