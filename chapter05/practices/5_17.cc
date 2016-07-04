#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> v1 = {0, 1, 2, 3};
    vector<int> v2 = {0, 1, 2, 2, 3, 5, 8};

    auto size = (v1.size() > v2.size()) ? v2.size() : v1.size();

    decltype(v1.size()) index = 0;
    for(; index < size; ++index) {
        if(v1[index] != v2[index]) {
            break;
        }
    }

    if(index == size)
        cout << "yes" << endl;

    return 0;
}
