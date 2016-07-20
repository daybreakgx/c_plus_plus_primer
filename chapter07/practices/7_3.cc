#include <iostream>
using std::cout; using std::cin; using std::endl;

#include "Sales_data_7_2.h"

int main()
{
    Sales_data total;
    if(cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if(total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;
    }
    else {
        cout << "No data?!" << endl;
    }
    return 0;
}
