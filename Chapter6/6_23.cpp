//print
#include <iostream>
#include <vector>
using namespace std;

void print(int (&arr)[2][3]){
    int count = 0;
    for(auto elem : arr){
        for(auto it : arr[count]){
            cout << it << endl;
        }
        count++;
    }
}
int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    print(arr);

    return 0;
}