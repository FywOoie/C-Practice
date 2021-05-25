//用整形数组初始化vector对象
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {0,1,2,3,4,5};
    vector<int> vec(begin(arr),end(arr));
    for(auto it = vec.begin();it != vec.end();++it)
        cout << *it << " ";

    return 0;
}