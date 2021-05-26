//判断输出
#include <iostream>
using namespace std;

int main(){
    int x[10];
    int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;//返回10 10/1
    cout << sizeof(p)/sizeof(*p) << endl;//返回2 8/4

    return 0;
}