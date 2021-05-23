/*读取一组书籍记录，将每条记录打印在标准输出上。*/

#include <iostream>
#include <ctime>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::to_string;

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
    Sales_data book;
    //获取结构体信息
    cout << "Please enter book isbn" << endl;
    cin >> book.isbn;
    cout << "Please enter book number" << endl;
    cin >> book.bookNum;
    cout << "Please enter book price" << endl;
    cin >> book.unitPrice;

    //生成购买时间和订单号
    book.orderNum = rand();
    book.buyTime = time(0);
    char* dt = ctime(&book.buyTime);

    //输出订单信息
    cout << "isbn：" + book.isbn << endl;
    cout << "number：" + to_string(book.bookNum) << endl;
    cout << "buy time：" << dt;
    cout << "unit price：" + to_string(book.unitPrice) << endl;
    cout << "order number：" << book.orderNum << endl;

    return 0;
}
