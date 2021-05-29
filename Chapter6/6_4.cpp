//编写fact函数
#include <iostream>
using namespace std;

int fact(int val){
    int ret = 1;
    while(val > 1)
        ret *= val--;

    return ret;
}

int main(){
    int para = 0;
    cin >> para;
    int j = fact(para);
    cout << para << "! is " << j << endl;

    return 0;
}
