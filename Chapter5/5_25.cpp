//读取两个数相除
#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0;
    cout << "input 2 numbers : ";
    while(cin >> a >> b){
        try{
            if(b == 0)
                throw runtime_error("除不尽");
            int result = a/b;
            cout << a << " / " << b << " = " << result;
        }catch(runtime_error err){
            cout << err.what() <<"\nTry again ? enter y or n" << endl;
            char c;
            cin >> c;
            if(!cin || c == 'n') break;
        }
    }

    return 0;
}