#ifndef SALES_DATA_H
#define SALES_DATA_H

#include<string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    std::string isbn() const { return bookNo; }
    double avg_price() const;
    Sales_data& combine(const Sales_data&);
};

double Sales_data::avg_price() const {
    if(units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data& rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

#endif
