#include <iostream>

int main(){

    double x = 0,y = 0;
    std::cin >> x >> y;

    double z = (x>y)?x:y;
    
    std::cout << z;
    
    return 0;
}