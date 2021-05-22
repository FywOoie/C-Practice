/*读取具有多个相同isbn的销售记录，输出所有记录之和*/

#include <iostream>
#include <ctime>
#include <string>

//定义结构体
struct Sales_data
{
    std::string isbn;//书版号
    unsigned int bookNum = 0;//买的数目
    time_t buyTime;//购买时间
    double unitPrice = 0;//单价
    long orderNum;//订单编号
};
int main(){
    Sales_data item, itemTemp;
    Sales_data itemSum;
    int count = 1;//储存交易个数

    //获取交易内容
    std::cout << "交易记录1 :" << std::endl;
    while(std::cin >> item.isbn >> item.bookNum >> item.unitPrice){
        if((itemTemp.isbn != item.isbn) && (count != 1)){//检查前后两次是否有相同ISBN以及是否为第一次判断
            std::cout << "There are items which have different ISBN!" << std::endl;
            break;
        }else{
            itemTemp = item;//将现有item赋值给itemTemp
            itemSum.isbn = item.isbn;
            itemSum.unitPrice = (itemSum.unitPrice * itemSum.bookNum +
                     item.unitPrice * item.bookNum)/(itemSum.bookNum + item.bookNum);//计算新单价
            itemSum.bookNum += item.bookNum;
            count++;
        }
        std::cout << itemSum.isbn << " " << itemSum.bookNum << " " << itemSum.unitPrice << std::endl;//输出记录和
        std::cout << "交易记录"<< count << " : " << std::endl;
    }
    

    return 0;
}