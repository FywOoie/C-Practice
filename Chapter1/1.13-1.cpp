/*本程序使用for循环将50到100的整数相加*/
#include <iostream>

int main(){
    int sum = 0;//存储和

    for(int i = 50;i <= 100; i++){
        sum += i;
    }

    std::cout << "sum from 50 to 100 is " << sum << std::endl;
    
    return 0;
}