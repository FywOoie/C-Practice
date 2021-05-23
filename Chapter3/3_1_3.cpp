/*本程序使用while循环提示用户输入两个整数并打印这两个整数所指定范围内所有整数*/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main(){
    int v1 = 0, v2 = 0;

    cout << "Please enter 2 numbers, we will print all integers between them" << endl;
    cin >> v1 >> v2;

    int min = v1 < v2? v1:v2;//获取两数中小数
    int max = v1 > v2? v1:v2;//获取两数中大数
    
    while(min <= max){
        cout << min << endl;
        min++;
    }

    return 0;
}
