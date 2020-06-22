#include "basket.h"

Basket::Basket() :total_sum{0}{} 

Basket::~Basket()
{
    basket_products_.clear();
}
 
std::vector<std::shared_ptr<Product>> Basket::get_basket_products()
{
    return basket_products_;
}

void Basket::add_to_basket(long long unsigned int id, Warehouse & warehouse)
{
    if(id > warehouse.get_warehouse_products().size() || id < 1)
    {
        throw Basket_exception();
    }
    else
    { 
        basket_products_.push_back(warehouse.get_warehouse_products().at(id-1));
    }
}

void Basket::delete_from_basket(long long unsigned int index)
{
    if(index > basket_products_.size() || index < 1)
    {
        throw Basket_exception();
        exit(0);
    }
    else
    {
        auto iterator = basket_products_.begin() + index - 1;
        basket_products_.erase(iterator);
    }
}

void Basket::clear_basket()
{
    basket_products_.clear();
}

float Basket::sum_shopping()
{
    total_sum = 0;
    for(long long unsigned int i = 0; i < basket_products_.size(); i++)
    {
        total_sum += basket_products_[i]->get_price(); 
    }
    return total_sum;
}

float Basket::get_total_sum()
{
    return total_sum;
}
 
std::ostream &operator<<(std::ostream &os, Basket &b)
{
    for (long long unsigned int i = 0; i < b.basket_products_.size(); i++) 
    {
        os << std::setw(50) << std::left << b.basket_products_[i]->get_name() << "............." 
           << std::setw(10) << std::right << b.basket_products_[i]->get_price() << "zl" << std::endl; 
    }
    os << std::endl << "calkowita suma: ..............\t" << b.total_sum << "zl" << std::endl;
    return os; 
}