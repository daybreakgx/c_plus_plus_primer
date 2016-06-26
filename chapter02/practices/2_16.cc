#include<iostream>

int main()
{
    int i = 8, &r1 = i;
    double d = 0, &r2 =d;

    std::cout << "i: " << i << ", r1: " << r1 <<std::endl;
    std::cout << "d: " << d << ", r2: " << r2 <<std::endl;
    r2 = 3.14159;

    std::cout << "i: " << i << ", r1: " << r1 <<std::endl;
    std::cout << "d: " << d << ", r2: " << r2 <<std::endl;

    r2 = r1;

    std::cout << "i: " << i << ", r1: " << r1 <<std::endl;
    std::cout << "d: " << d << ", r2: " << r2 <<std::endl;
    
    r2 = 3.14;
    i = r2;

    std::cout << "i: " << i << ", r1: " << r1 <<std::endl;
    std::cout << "d: " << d << ", r2: " << r2 <<std::endl;

    r1 = d;

    std::cout << "i: " << i << ", r1: " << r1 <<std::endl;
    std::cout << "d: " << d << ", r2: " << r2 <<std::endl;
    return 0;
}
