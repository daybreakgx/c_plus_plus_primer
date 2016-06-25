#include<iostream>

int main()
{
    int start = 0, end = 0;
    int v1 = 0, v2 = 0;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    if(v1 > v2)
    {
        start = v2;
        end = v1;
    }
    else
    {
        start = v1;
        end = v2;
    }
    while(start <= end)
    {
        std::cout << start << std::endl;
        start++;
    }
    return 0;
}

