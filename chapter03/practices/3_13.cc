#include<iostream>
#include<string>
#include<vector>

using std::string;
using std::vector;
using std::cout; using std::cin; using std::endl;

int main()
{
    vector<int> v1;
    for(auto i : v1)
        cout << i << endl;
    cout << "print v1 finished." << endl;

    vector<int> v2(10);
    for(auto i : v2)
        cout << i << endl;
    cout << "print v2 finished." << endl;

    vector<int> v3(10, 42);
    for(auto i : v3)
        cout << i << endl;
    cout << "print v3 finished." << endl;

    vector<int> v4{10};
    for(auto i : v4)
        cout << i << endl;
    cout << "print v4 finished." << endl;

    vector<int> v5{10, 42};
    for(auto i : v5)
        cout << i << endl;
    cout << "print v5 finished." << endl;

    vector<string> v6{10};
    for(auto s : v6)
        cout << s << endl;
    cout << "print v6 finished." << endl;

    vector<string> v7{10, "hi"};
    for(auto s : v7)
        cout << s << endl;
    cout << "print v7 finished." << endl;

    return 0;
}
