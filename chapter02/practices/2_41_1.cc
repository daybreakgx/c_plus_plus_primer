#include<iostream>
#include"Sales_data.h"

int main()
{
    Sales_data item;
    double price = 0;
    std::cin >> item.bookNo >> item.units_sold >> price;

    item.revenue = item.units_sold * price;
    std::cout << item.bookNo << " " << item.units_sold << " " << item.revenue << std::endl;
    return 0;
}
