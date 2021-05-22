#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <ctime>

struct Sales_data
{
    std::string isbn;//书版号
    unsigned int bookNum = 0;//买的数目
    time_t buyTime;//购买时间
    double unitPrice = 0;//单价
    long orderNum;//订单编号
};
#endif