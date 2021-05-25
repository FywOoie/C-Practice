//vector赋值array
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    int arr[5];
    int count = 0;

    //赋值
    for(auto it = vec.begin();it != vec.end();++it){
        arr[count] = *it;
        count++;
    }

    //打印
    cout << "new array :";
    for(int i = 0;i < 5;i++)
        cout << arr[i] << " ";
    

    return 0;
}