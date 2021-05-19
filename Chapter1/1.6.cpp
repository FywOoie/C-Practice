/*不合法，因为下面两行没有cout输出流，正确程序应如下所示*/

#include <iostream>
int main(){
    int v1 = 8, v2 = 7;
    std::cout << "The sum of " <<v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;

    return 0;
}
