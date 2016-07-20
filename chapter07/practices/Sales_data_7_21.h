#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<string>

class Sales_data {
friend Sales_data add(Sales_data&, Sales_data&);
friend std::istream& read(std::istream&, Sales_data&);
friend std::ostream& print(std::ostream&, const Sales_data&);
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double avg_price() const;
public:
    std::string isbn() const { return bookNo; }
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


Sales_data add(Sales_data& lhs, Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream& read(std::istream& is, Sales_data& item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is; 
}

std::ostream& print(std::ostream& os, const Sales_data& item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price() << std::endl;
    return os;
}
#endif
