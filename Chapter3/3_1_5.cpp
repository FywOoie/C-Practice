/*读取两个isbn相同的sales_item对象，输出他们的和*/

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
    Sales_data item1, item2;
    //获取两条交易记录
    cout << "交易1 ：" << endl;
    cin >> item1.isbn >> item1.bookNum >> item1.unitPrice;
    cout << "交易2 ：" << endl;
    cin >> item2.isbn >> item2.bookNum >> item2.unitPrice;

    if(item1.isbn == item2.isbn)//two items should have the same ISBN
        cout << item1.isbn << " " << item1.bookNum + item2.bookNum << " "
        << (item1.unitPrice*item1.orderNum + item2.unitPrice*item2.orderNum)/2 << endl;//打印记录
    else
        cout << "Two Sales items are not the same!" << endl;

    return 0;
}
