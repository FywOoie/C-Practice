//接受参数并连接
#include <iostream>
using namespace std;

int main(int argc, char** argv){
    if(argc == 2){
        cout << argv[1] << argv[2] << endl;
    }
    else{
        cout << "2 should be provided";
    }
    return 0;
}