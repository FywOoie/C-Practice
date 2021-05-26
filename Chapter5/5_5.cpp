//把数字成绩输出成字母成绩
#include <iostream>
#include <string>
using namespace std;

int main(){
    int grade = 0;
    string letterGrade = "";
    cout << "Please give a grade : ";
    cin >> grade;

    if((grade < 0) || (grade > 100)){
        cout << "Invalid grade";
        exit(0);
    }else if(grade >= 90)
        letterGrade = "A";
    else if(grade >= 75)
        letterGrade = "B";
    else if(grade >= 60)
        letterGrade = "C";  
    else  
        letterGrade = "D"; 

    cout << "The letter grade is : " << letterGrade << endl;

    return 0;
}