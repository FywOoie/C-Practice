/*本程序可实现打印用户提供范围内的整数并无视两数大小*/
#include <iostream>

int main(){
    int v1 = 0, v2 = 0;

    std::cout << "Please enter 2 numbers, we will print all integers between them" << std::endl;
    std::cin >> v1 >> v2;

    int min = v1 < v2? v1:v2;//获取两数中小数
    int max = v1 > v2? v1:v2;//获取两数中大数
    
    while(min <= max){
        std::cout << min << std::endl;
        min++;
    }

    return 0;
}
