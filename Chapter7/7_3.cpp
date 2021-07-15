#include "7_2.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    Sales_data temp;
    string total = temp.getIsbn();
    if(cin >> total){
        Sales_data temp2;
        string trans = temp2.getIsbn();
        while(cin >> trans){
            if(total == trans)
                total += trans;
            else{
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    }else{
        cout << "No data?!" << endl;
        return -1;
    }
    return 0;
}
