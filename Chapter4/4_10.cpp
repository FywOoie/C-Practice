//遇到42停止
#include <iostream>
using namespace std;

int main(){
    int temp = 0;

    cout << "遇到42停止 ：";
    cin >> temp;
    while(temp != 42){
        cin >> temp;
    }
    cout << "程序停止";

    return 0;
}