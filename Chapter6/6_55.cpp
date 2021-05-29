//
#include <iostream>
#include <vector>
using namespace std;

int add(int i1, int i2){
    return (i1+i2);
}
int sub(int i1, int i2){
    return (i1-i2);
}

int mul(int i1, int i2){
    return (i1*i2);
}
int divi(int i1, int i2){
    return i2 != 0 ? i1 / i2 : 0;
}
int main(){
    typedef int(*p)(int a, int b);
    vector<p> vec{add,sub,mul,divi};
    for (auto f : vec)
		cout << f(2, 2) <<endl;


    return 0;
}