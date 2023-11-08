#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using namespace first;

     std::cout << "The number is: " << x << std::endl;
     system("pause");
     return 0;
}