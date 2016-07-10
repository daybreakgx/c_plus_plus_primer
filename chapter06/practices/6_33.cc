#include <iostream>
using std::endl; using std::cout; using std::cin;

#include <vector>
using std::vector;

void foreach_vector(vector<int>::size_type index, vector<int> v)
{
    if(index != 0)
        foreach_vector(index-1, v);
    cout << v[index] << endl;
    return;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto size = v.size();

    foreach_vector(size-1, v);

    return 0; 
}
