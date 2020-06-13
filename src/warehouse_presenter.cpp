#include "warehouse_presenter.h"

void Warehouse_presenter::show_products() 
{
    for (long long unsigned int i = 0; i < warehouse_products_.size(); i++)
    {
        std::cout << std::setw(3) << std::right << i+1 << ". ";
        warehouse_products_[i]->show();
    }
    std::cout << std::endl;
}

void Warehouse_presenter::show_product_information(long long unsigned int id) 
{
    if(id > warehouse_products_.size() || id < 1)
    {
        std::cout << "nieprawidlowa wartosc indeksu!!" << std::endl;
    }
    else
    {
        warehouse_products_[id-1]->show_detailed_information();
    }
}