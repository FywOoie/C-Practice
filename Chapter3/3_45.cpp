//改写程序，使用auto
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    
    //版本1：使用范围for
    for(auto &row : arr){
        for(auto col : row){
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;

    //版本2：下标运算符
    for(auto i = 0;i < 3;i++){
        for(auto j = 0;j < 2;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;      

    //使用指针
    for(auto p = arr;p != arr + 3;++p){
        for(auto *ptr2 = *p;ptr2 != *p + 2;++ptr2){
            cout << *ptr2 << " ";
        }
        cout << endl;
    }

    return 0;
}