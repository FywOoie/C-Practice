#include <ctime>
#include <string>
#include <iostream>

class Sales_data
{
public:
	std::string getIsbn() const {
		return this->isbn;
	}

    void setIsbn(std::string isbn){
        this->isbn = isbn;
    }

    unsigned int getBookNum() const{
        return this->bookNum;
    }

    void setBookNum(unsigned int bookNum){
        this->bookNum = bookNum;
    }

    double getUnitPrice() const{
        return this->unitPrice;
    }

    void setUnitPrice(double unitPrice){
        this->unitPrice = unitPrice;
    }

	Sales_data& combine(const Sales_data &);

    std::istream &read(std::istream &, Sales_data &);

    std::ostream &print(std::ostream &, const Sales_data &);

    Sales_data add(const Sales_data &, const Sales_data &);
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

std::istream &read(std::istream &is, Sales_data &item){
    double unitPrice;
    unsigned int bookNum;
    std::string isbn;
    is >> isbn >> bookNum >> price;
    item.setIsbn(isbn);
    item.setBookNum(bookNum);
    item.setUnitPrice(unitPrice);
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item){
    os << item.getIsbn() << " " << item.getUnitPrice();
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

