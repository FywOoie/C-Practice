//比较数组是否相等
#include <iostream>
using namespace std;

int main(){
    //获取数组输入
    int arr1[4] = {};
    int temp = 0;
    cout << "Please input 4 numbers as the first array: ";
    for(int i = 0;i < 4;i++){
        cin >> temp;
        arr1[i] = temp;
    }

    int arr2[4] = {};
    cout << "Please input 4 numbers as the second array: ";
    for(int i = 0;i < 4;i++){
        cin >> temp;
        arr2[i] = temp;
    }

    //判断元素是否相同
    int isSame = 1;
    if(sizeof(arr1) == sizeof(arr2)){//sizeof返回16
        for(int i = 0;i < 4;i++){
            if(arr1[i] != arr2[i])  isSame = 0;
        }
    }else isSame = 0;

    //输出结果
    if(isSame == 0)
        cout << "Two arrays are not the same!" << endl; 
    else
        cout << "Two arrays are the same!" << endl; 

    return 0;
}