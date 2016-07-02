#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <vector>
using std::vector;

int main()
{
    int i;
    vector<int> v;
    
    while(cin>>i) {
        v.push_back(i);
    }
    
    auto it1 = v.begin();
    auto it2 = v.end();
    it2--;
    for(; it2 >= it1; it1++, it2--) {
        if(it1 == it2)
            cout << *it1 << endl;
        else
            cout << *it1 + *it2 << endl;
    }

    return 0;
}

