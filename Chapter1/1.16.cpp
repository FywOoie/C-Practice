/*该程序从cin读取一组数，输出其和*/

#include <iostream>

int main(){
    int sum = 0;
    int value = 0;

    std::cout << "Enter several numbers to be added : " << std::endl;

    while(std::cin >> value){
        sum += value;
    }

    std::cout << "The sum of numbers above is " << sum << std::endl;

    return 0;
}
