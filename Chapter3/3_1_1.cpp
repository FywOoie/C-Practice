/*本程序使用while循环将50到100的整数相加*/
#include <iostream>
using std::cout;
using std::endl;
int main(){
    int count = 50;//存储每次的加数
    int sum = 0;//存储和

    while(count <= 100){
        sum += count;
        count++;
    }

    cout << "sum from 50 to 100 is " << sum << endl;
    
    return 0;
}