//查找奇数并将其翻倍
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,4,3,5,6};

    for(auto it = vec.begin();it != vec.end();++it){
        *it = ((*it % 2) == 0) ? (*it = *it) : (*it = *it * 2);//条件运算符
        cout << *it << " ";
    }    
    //结果： 2 2 4 6 10 6

    return 0;
}