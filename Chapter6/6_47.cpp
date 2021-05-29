//递归输出vector
#include <iostream>
#include <vector>
using namespace std;

void printDG(int i, vector<int> vec){
    #ifndef NDEBUG
    if(i == 0){
        cout << vec[0] << endl;
    }else{
        cout << vec[i] << " ";
        printDG(i-1, vec);
    }
    #endif
}

int main(){
    vector<int> vec{1,2,3,4,5};
    printDG(vec.size()-1,vec);

    return 0;
}