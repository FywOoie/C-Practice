//读入整数输出相邻和
#include <iostream>
#include <vector>
#include <string>
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

    //输出相邻和
    int count = 0;
    int temp = 0;
    cout << "The sum of two adjacent numbers is :";
    for(auto &r : vec){
        if(count == 0)
            temp = r;
        else{
            cout << temp + r << " ";
            temp = r;
        }
        count++;
    }

    return 0;
}