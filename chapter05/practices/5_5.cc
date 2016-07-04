#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    string grade_str[] = {"F", "D", "C", "B", "A", "A++"};
    int grade;

    while(cin>>grade) {
        if(grade > 100) {
            cout << "invalid input" << endl;
            continue;
        }
        if(grade < 60) {
            cout << grade_str[0] << endl;
        } else {
            cout << grade_str[(grade - 50) / 10] << endl;
        }
    } 


    return 0;
}
