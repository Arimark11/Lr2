#include <iostream>

int main(){

    double X = 0, Y = 0;

    std::cin >> X >> Y;
    std::cout << std::endl;

    bool res = true;
    res = (X>Y)?true:false;

    (res == true)?std::cout << X:std::cout << Y;
    
    return 0;
}