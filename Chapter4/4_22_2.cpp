//加入low pass 用if
#include <iostream>
using namespace std;

int main(){
    int grade = 0;
    //接受grade输入
    cout << "Please enter a grade : ";
    cin >> grade;

    string finalGrade = "";
    if((grade > 100) || (grade < 0))
        finalGrade = "out of range";
    else if(grade > 90)
        finalGrade = "high pass";
    else if(grade > 75)
        finalGrade = "pass";
    else if(grade > 60)
        finalGrade = "low pass";
    else
        finalGrade = "fail";
        
    cout << "This grade " << finalGrade << " the test";

    return 0;
}