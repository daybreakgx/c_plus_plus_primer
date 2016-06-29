#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data item1, item2;
    double price;

    std::cin >> item1.bookNo >> item1.units_sold >> price;
    item1.revenue = item1.units_sold * price;

    std::cin >> item2.bookNo >> item2.units_sold >> price;
    item2.revenue = item2.units_sold * price;

    std::cout << item2.bookNo << " " << item2.units_sold + item1.units_sold << " " << item2.revenue + item2.revenue << std::endl;
    return 0;
}
