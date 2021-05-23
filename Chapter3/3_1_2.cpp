/*本程序使用while循环打印按降序打印0-10整数*/
#include <iostream>
using std::cout;
using std::endl;
int main(){
    int count = 10;//存储被打印数

    while(count >= 0){
        cout << count << endl;
        count--;
    }

    return 0;
}