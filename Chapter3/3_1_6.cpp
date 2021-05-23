/*读取具有多个相同isbn的销售记录，输出所有记录之和*/

#include <iostream>
#include <ctime>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

//定义结构体
struct Sales_data
{
    string isbn;//书版号
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
    cout << "交易记录1 :" << endl;
    while(cin >> item.isbn >> item.bookNum >> item.unitPrice){
        if((itemTemp.isbn != item.isbn) && (count != 1)){//检查前后两次是否有相同ISBN以及是否为第一次判断
            cout << "There are items which have different ISBN!" << endl;
            break;
        }else{
            itemTemp = item;//将现有item赋值给itemTemp
            itemSum.isbn = item.isbn;
            itemSum.unitPrice = (itemSum.unitPrice * itemSum.bookNum +
                     item.unitPrice * item.bookNum)/(itemSum.bookNum + item.bookNum);//计算新单价
            itemSum.bookNum += item.bookNum;
            count++;
        }
        cout << itemSum.isbn << " " << itemSum.bookNum << " " << itemSum.unitPrice << endl;//输出记录和
        cout << "交易记录"<< count << " : " << endl;
    }
    

    return 0;
}