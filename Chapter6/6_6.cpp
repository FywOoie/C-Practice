//用三种形式
#include <iostream>
using namespace std;

int test(int i){
    static int slocal = 0;
    int local = 0;
    for(int j = 0;j < i;j++){
        cout << slocal << " ";
        slocal++;
        local++;
    }
    cout << slocal <<endl;
    return local;
}

int main(){
    int result = test(3);
    int temp = test(0);//slocal还是3
    cout << result << " ";

    return 0;
}
