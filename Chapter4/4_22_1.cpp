//加入low pass
#include <iostream>
using namespace std;

int main(){
    int grade = 0;
    //接受grade输入
    cout << "Please enter a grade : ";
    cin >> grade;

    string finalGrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" 
                    : (grade > 60) ? "low pass" : "fail";//条件判断语句
    cout << "This grade " << finalGrade << " the test";

    return 0;
}