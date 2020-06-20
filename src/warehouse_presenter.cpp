#include "warehouse_presenter.h"

void Warehouse_presenter::show_products(Warehouse& warehouse_) 
{
    for (long long unsigned int i = 0; i < warehouse_.get_warehouse_products().size(); i++)
    {
        std::cout << std::setw(3) << std::right << i+1 << ". ";
        warehouse_.get_warehouse_products().at(i)->show();
    }
    std::cout << std::endl;
}

void Warehouse_presenter::show_product_information(Warehouse& warehouse_, long long unsigned int id) 
{
    if(id > warehouse_.get_warehouse_products().size() || id < 1)
    {
        std::cout << "nieprawidlowa wartosc indeksu!!" << std::endl;
    }
    else
    {
        warehouse_.get_warehouse_products().at(id)->show_detailed_information();
    }
}