//int数组，元素值为下标
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[10];

    cout << "Orignial array: ";//原来的数组
    for(int i = 0;i < 10;i++){
        arr[i] = i;
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> vec(arr,arr+10);//赋值给vector
    cout << "Copied array: ";
    for(auto it = vec.begin();it != vec.end();++it){
        cout << *it << " ";
    }

    return 0;
}