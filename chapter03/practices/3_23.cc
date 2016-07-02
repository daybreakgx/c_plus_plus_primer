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

    for(auto it = v.begin(); it != v.end(); it++) {
        *it *= 2;
        cout << *it << endl;
    }

    return 0;
}


