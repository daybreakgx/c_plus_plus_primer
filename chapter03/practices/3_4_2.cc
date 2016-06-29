#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    if(str1.size() > str2.size()) {
        cout << str1 << endl;
    } else if (str1.size() < str2.size()) {
        cout << str2 << endl;
    } else {
        cout << "The size of " << str1 << " equal " << str2 << endl;
    }

    return 0;
}
