#include <iostream>
#include "7_12.h"

int main(){
    Sales_data total(std::cin);
    if(std::cin){
        Sales_data trans(std::cin);
        while(read(std::cin,trans)){
            if(total.getIsbn() == trans.getIsbn())
                total.combine(trans);
            else{
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
        print(std::cout,total) << std::endl;
    }else{
        std::cerr << "No data!" << std::endl;
    }

    return 0;
}