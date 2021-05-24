//3.13各个问题包含多少个元素
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    //初始化
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    //显示vector<int>值和长度
    vector<vector<int>> intVector = {v1,v2,v3,v4,v5};
    int countInt = 0;
    for(auto &r : intVector){
        cout << "v" << countInt + 1 << " size:" << r.size();
        cout << "  v" << countInt + 1 << " elements: ";
        for(auto &rTemp : r)
            cout << rTemp << " ";
        cout << endl;
        countInt++;
    }

    //显示vector<string>值和长度
    vector<vector<string>> strVector = {v6,v7};
    int countStr = 0;
    for(auto &r : strVector){
        cout << "v" << countStr + 6 << " size:" << r.size();
        cout << "  v" << countStr + 6 << " elements: ";
        for(auto &rTemp : r)
            cout << rTemp << " ";
        cout << endl;
        countStr++;
    }

    return 0;
}
