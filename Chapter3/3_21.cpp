//3.13各个问题包含多少个元素
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void showInfo(vector<int> vec, string name){
    int count = 0;

    cout << name << " elements:";
    for(auto it = vec.begin();it != vec.end();++it){
        cout << *it << " ";
        count++;
    }
    cout << name <<" size :" << count << endl;
}

void showInfo1(vector<string> vec, string name){
    int count = 0;

    cout << name << " elements:";
    for(auto it = vec.begin();it != vec.end();++it){
        cout << *it << " ";
        count++;
    }
    cout << name <<" size :" << count << endl;
}

int main(){
    //初始化
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    showInfo(v1,"v1");
    showInfo(v2,"v2");
    showInfo(v3,"v3");
    showInfo(v4,"v4");
    showInfo(v5,"v5");
    showInfo(v5,"v5");
    showInfo1(v6,"v7");
    showInfo1(v7,"v7");

    return 0;
}
