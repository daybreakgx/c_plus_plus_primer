#include<iostream>

int main()
{
     int sum = 0;
     for(int index = 50; index <= 100; index++)
        sum += index;
     std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

     for(int index = 10; index >= 0; index--)
        std::cout << index << std::endl;
  
     int v1 = 0, v2 = 0;
     std::cout << "Enter two numbers: " << std::endl;
     std::cin >> v1 >> v2;
     int start = 0, end = 0;
     if( v1 > v2)
     {
         start = v2;
         end = v1;
     }
     else
     {
         start = v1;
         end = v2;
     }
     for(;start <= end; start++)
        std::cout << start << std::endl;

     return 0;
}

    
