//比较字符串
#include <iostream>
#include <string>
using namespace std;

int main(){
    string v1 = "qwe";
    string v2 = "qwe1";

    if(v1 == v2)
        cout << "two strings are the same" << endl;
    else
        cout << "two strings are not the same" << endl;

    return 0;
}