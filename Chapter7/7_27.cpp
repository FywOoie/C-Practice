#include "7_29.h"
#include <iostream>

int main(){
    Screen myScreen(5,5,'X');
    myScreen.move(4,0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);//7_29没有#
    std::cout << "\n";

    return 0;
}