/*本程序使用for循环提示用户输入两个整数并打印这两个整数所指定范围内所有整数*/
#include <iostream>

int main(){
    int v1 = 0, v2 = 0;

    std::cout << "Please enter 2 numbers, we will print all integers between them" << std::endl;
    std::cin >> v1 >> v2;

    int min = v1 < v2? v1:v2;//获取两数中小数
    int max = v1 > v2? v1:v2;//获取两数中大数
    
    for(int i = min;i <= max;i++){//循环输出
        std::cout << i << std::endl;
    }

    return 0;
}