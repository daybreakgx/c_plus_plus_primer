#include<iostream>

int main()
{
    int i = 10, j = 20;
    int *pi = &i;

    std::cout << "*pi: " << *pi << std::endl;
    
    *pi = 30;
    std::cout << "*pi: " << *pi << std::endl;
   
    pi = &j;
    std::cout << "*pi: " << *pi << std::endl;
    return 0;
}
