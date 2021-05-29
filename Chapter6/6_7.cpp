//第一次返回0
#include <iostream>
using namespace std;

int test(){
    static int slocal = 0;
    if(slocal == 0){
        slocal++;
        return 0;
    }else{
        return 1;
    }
}

int main(){
    cout << test() << endl;//0
    cout << test() << endl;//1
    cout << test() << endl;//1

    return 0;
}
