//for改写while
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> temp = {1,2,3,4,5};
    auto it = temp.begin();
    while(it != temp.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    for(auto it1 = temp.begin();it1 != temp.end();++it1){
        cout << *it1 << " ";
    }

    return 0;
}