//输出多维数组
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    
    //版本1：使用范围for
    for(const int (&row)[2] : arr){
        for(const int col : row){
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;

    //版本2：下标运算符
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 2;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;      

    //使用指针
    for(int (*ptr)[2] = arr;ptr != arr + 3;++ptr){
        for(int *ptr2 = *ptr;ptr2 != *ptr + 2;++ptr2){
            cout << *ptr2 << " ";
        }
        cout << endl;
    }

    return 0;
}