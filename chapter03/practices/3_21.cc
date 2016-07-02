#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<int> v1;
    cout << "print v1..." << endl;
    for(auto it = v1.begin(); it != v1.end(); it++)
        cout << *it << endl;

    vector<int> v2(10);
    cout << "print v2..." << endl;
    for(auto it = v2.begin(); it != v2.end(); it++)
        cout << *it << endl;

    vector<int> v3(10, 42);
    cout << "print v3..." << endl;
    for(auto it = v3.begin(); it != v3.end(); it++)
        cout << *it << endl;

    vector<int> v4{10};
    cout << "print v4..." << endl;
    for(auto it = v4.begin(); it != v4.end(); it++)
        cout << *it <<endl;

    vector<int> v5{10, 42};
    cout << "print v5..." << endl;
    for(auto it = v5.begin(); it != v5.end(); it++)
        cout << *it << endl;

    vector<string> v6{10};
    cout << "print v6..." << endl;
    for(auto it = v6.begin(); it != v6.end(); it++)
        cout << *it << endl;

    vector<string> v7{10, "hi"};
    cout << "print v7..." << endl;
    for(auto it = v7.begin(); it != v7.end(); it++)
        cout << *it << endl;

    return 0;
}
