//验证
#include <iostream>
using namespace std;

void f(){
    cout << "f with no arg"<<endl;
}

void f(int i){
    cout << "f with one int arg" << endl;
}

void f(int i1, int i2){
    cout << "f with two int arg" << endl;
}

void f(int i,double d){
    cout << "f with double" << endl;
}

int main(){
    f(2.56,42);//合法
    f(42);
    f(42,0);
    f(2.56,3.14);

    return 0;
}