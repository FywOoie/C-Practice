//while改写for
#include <iostream>
#include <string>
using namespace std;

int main(){
    string temp[] = {"qwe","asd"};
    for(int i = 0;i < 2; i++){
        cout << temp[i] << " ";
    }
    cout << endl;

    int cnt = 0;
    while(cnt < 2){
        cout << temp[cnt] << " ";
        cnt++;
    }

    return 0;
}