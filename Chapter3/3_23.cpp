//使用迭代器将元素值变成原来的两倍
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec{1,2,3,42,5,66,88,88,90,77};//包含10个整数的vector int<>

    for(auto it = vec.begin();it != vec.end();++it){
        *it *= 2;//变为原来两倍
        cout << *it << " ";
    }

    return 0;
}