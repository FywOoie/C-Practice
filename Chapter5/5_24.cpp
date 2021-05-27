//读取两个数相除
#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0;
    cout << "input 2 numbers : ";
    cin >> a >> b;

    if(b != 0){
        cout << a << " / " << b << " = " << (a/b);
    }else{
        throw runtime_error("除不尽");
    }

    return 0;
}