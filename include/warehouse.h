#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "front_shock.h" 
#include "headset.h"
#include "bike.h"

#include <vector>
#include <algorithm>
#include <memory>


class Warehouse
{ 
public:
    Warehouse();
    ~Warehouse();
    std::vector<std::shared_ptr<Product>> get_warehouse_products();
    void show_products();
    void show_product_information(long long unsigned int id);
    void sort_by_name_asc();
    void sort_by_name_desc();
    void sort_by_price_asc();
    void sort_by_price_desc();
    void sort_by_weight_asc();
    void sort_by_weight_desc();
private:
    std::vector<std::shared_ptr<Product>>warehouse_products_;
};
#endif /* WAREHOUSE_H */