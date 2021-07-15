#include <ctime>
#include <string>
class Sales_data
{
public:
	std::string getIsbn() const {
		return this->isbn;
	}

	Sales_data& combine(const Sales_data &);
private:
    std::string isbn;//书版号
    unsigned int bookNum = 0;//买的数目
    time_t buyTime;//购买时间
    double unitPrice = 0;//单价
    long orderNum;//订单编号

};

Sales_data& Sales_data::combine(const Sales_data &rhs){
	bookNum += rhs.bookNum;
	unitPrice = (unitPrice + rhs.unitPrice) / 2;
	return *this;
}

int main(){
    return 0;
}
