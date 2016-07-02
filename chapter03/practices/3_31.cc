#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <cstddef>
using std::size_t;

int main()
{
    int arr[10] = {};
    int arr_copy[10] = {};
    int index = 0;
    for(auto &i : arr) {
        i = index++;
    }
    for(auto j : arr)
        cout << j << endl;
    

    for(int i = 0; i < 10; i++)
        arr_copy[i] = arr[i];

    for(auto j : arr_copy)
        cout << j << endl;
    return 0;
}
