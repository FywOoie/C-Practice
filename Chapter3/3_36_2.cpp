//比较两个vector是否相等
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1(10,2);
    vector<int> vec2(10,12);

    //判断元素是否相等
    int isSame = 1;
    if(vec1.size() == vec2.size()){
        for(auto it1 = vec1.begin(), it2 = vec2.begin();it1 != vec1.end();++it1){
            if(*it1 != *it2)    isSame = 0;
            ++it2;
        }
    }else   isSame = 0;

    //输出结果
    if(isSame == 0)
        cout << "Two vectors are not the same!" << endl; 
    else
        cout << "Two vectors are the same!" << endl; 

    return 0;
}