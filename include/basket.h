#ifndef BASKET_H
#define BASKET_H
#include "warehouse.h"

#include <iterator>

class Basket 
{
public:
    Basket();
    ~Basket();
    std::vector<std::shared_ptr<Product>> get_basket_products();
    void add_to_basket(long long unsigned int id, Warehouse & warehouse);
    void delete_from_basket(long long unsigned int index);
    void clear_basket();
    float sum_shopping();
    float get_total_sum();
    friend std::ostream &operator <<(std::ostream &, Basket&);
private:
    float total_sum;
    std::vector<std::shared_ptr<Product>> basket_products_;
};
#endif /* BASKET_H */