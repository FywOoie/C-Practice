//输出数组前后第1，2组数的和
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int userInt = 0;

    //接受用户输入
    cout << "Please enter number of numbers ended with 0 :";
    while(cin >> userInt){
        if(userInt == 0)
            break;
        vec.push_back(userInt);
    }

    int temp = 0;
    //使用迭代器输出相邻和
    cout << "The sum of two adjacent numbers is :";
    for(auto intStart = vec.begin();intStart != vec.end();++intStart){
        if(intStart != vec.begin()){
            cout << temp + *intStart << " ";
        }
        temp = *intStart;
    }
    
    return 0;
}