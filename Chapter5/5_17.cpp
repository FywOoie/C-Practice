//判断是否为前缀
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1 = {0,1,6,3};
    vector<int> vec2 = {0,1,2,3,4,5};

    int isPrefix = 1;
    if(vec1.size() >= vec2.size()){
        for(auto it1 = vec2.begin(), it2 = vec1.begin();it1 != vec2.end();++it1,++it2){
            if(*it1 != *it2)
                isPrefix = 0;
        }
    }else{
        for(auto it1 = vec1.begin(), it2 = vec2.begin();it1 != vec1.end();++it1,++it2){
            if(*it1 != *it2)
                isPrefix = 0;
        }
    }

    cout << isPrefix << endl;

    return 0;
}