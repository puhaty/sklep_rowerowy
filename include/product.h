#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product
{
public:
    virtual ~Product(){}
    virtual void show() = 0;
    virtual void show_detailed_information() = 0;
    virtual float get_price() = 0;
    virtual int get_weight() = 0;
    virtual int get_series_code() = 0;
    virtual std::string get_name() = 0;
};

#endif /* PRODUCT_H */