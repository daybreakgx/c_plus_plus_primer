#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    string rsp;
    do {
        string s1, s2;
        cout << "Enter two string:" << endl;

        cin >> s1 >> s2;
        (s1.size() > s2.size()) ? cout << s2 << endl : cout << s1 << endl;
        
        cout << "More? Enter yes or no: ";
        cin >> rsp;
    }while(!rsp.empty() && rsp[0] != 'n');
    return 0;
}
