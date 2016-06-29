#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    if(str1 == str2) {
        cout << str1 << " equal " << str2 << endl;
    } else {
        cout << (str1 > str2 ? str1 : str2) << endl;
    }

    return 0;
}
