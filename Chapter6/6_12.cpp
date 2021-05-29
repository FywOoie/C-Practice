//交换两个数的值
#include <iostream>
using namespace std;

void exchange(int &p, int &q){
    int temp = p;
    p = q;
    q = temp;
}

int main(){
    int a = 1, b = 2;
    exchange(a,b);

    cout << a << endl;
    cout << b << endl;

    return 0;
}