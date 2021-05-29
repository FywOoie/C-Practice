//递加intilaizelist元素
#include <iostream>
using namespace std;

int add(initializer_list<int> list){
    int sum = 0;
    for(auto it = list.begin();it != list.end();++it){
        sum += *it;
    }
    return sum;
}

int main(){
    initializer_list<int> intList{1,2,3,4,5};

    cout << add(intList) << endl;
    return 0;
}