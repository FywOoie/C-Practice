//把数字成绩输出成字母成绩
#include <iostream>
#include <string>
using namespace std;

int main(){
    int grade = 0;
    string letterGrade = "";
    cout << "Please give a grade : ";
    cin >> grade;

    letterGrade = (grade >= 90) ? "A" : (grade >=75) ? "B" : (grade >= 60) ? "C" : "D";

    cout << "The letter grade is : " << letterGrade << endl;

    return 0;
}