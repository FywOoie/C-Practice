//将数组所有元素置为0
#include <iostream>
using namespace std;

int main(){
    //显示原数组
    int arr[4] = {1,2,3,4};
    cout << "Orignal array : ";
    for(int i = 0;i < 4;i++)
        cout << arr[i] << " ";
    cout << endl;

    int *ptr = arr;//指向第一个元素
    cout << "New array : ";
    for(int i = 0;i < 4;i++){
        *ptr = 0;
        cout << arr[i] << " ";
        ++ptr;
    }

    return 0;
}