#include <iostream>

int main(){
//this is a comment
    const double PI = 3.14159;
    double radius;
    std::cout << "Input the radius of the circle: ";
    std::cin >> radius;
    double circ = 2 * PI * radius;
    int circ_i = int(circ);
    std::cout << "The circumfrence is: " << circ_i << "cm" << std::endl;
    std::cout << "Or: " << 2 * radius << "cm pi\n";
    system("pause");
    return 0;
}